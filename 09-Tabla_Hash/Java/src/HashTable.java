public class HashTable<K, V> {
    private class Entry {
        public K key;
        public V value;
        public int hash;

        public Entry(K key, V value) {
            this.key = key;
            this.value = value;
            this.hash = key.hashCode();
        }

        @Override
        public boolean equals(Object otherEntry) {
            Entry other = (Entry) otherEntry;
            if(this.hash != other.hash) return false;
            return this.key.equals(other.key);
        }
    }

    private int tableSize;
    private SimpleLinkedList<Entry>[] entries;

    public HashTable(int tableSize) {
        this.tableSize = tableSize;
        this.entries = new SimpleLinkedList[tableSize];
        for(int i = 0; i < tableSize; i++) {
            entries[i] = new SimpleLinkedList<>();
        }
    }

    private int normalizeIndex(int hashKey) {
        return (hashKey & 0x7FFFFFFF) % tableSize;
    }

    public void add(K key, V value) {
        Entry entrada = new Entry(key, value);
        int indice = normalizeIndex(entrada.hash);
        if (entries[indice] == null) {
            entries[indice] = new SimpleLinkedList<>();
            entries[indice].addFirst(entrada);
        } else {
            if (entries[indice].search(entrada) >= 0) {
                entries[indice].update(entrada, entrada);
            } else {
                entries[indice].addFirst(entrada);
            }
        }
    }

    public V valueOf(K keyToSearch) {
        int bucketIndex = normalizeIndex(keyToSearch.hashCode());
        if (entries[bucketIndex] == null || entries[bucketIndex].isEmpty()) return null;
        Entry entry = new Entry(keyToSearch, null);
        Entry index = entries[bucketIndex].getValue(entry);
        if (index == null) return null;
        return index.value;
    }

    public void remove(K keyToRemove) {
        Entry aux = new Entry(keyToRemove, null);
        int bucketIndex = normalizeIndex(keyToRemove.hashCode());
        entries[bucketIndex].deleteValue(aux);
    }

}
