class Trabajador:
    MONTO_H_EXTRA = 276.5;
    PRESTACION_ANUAL = 0.03;
    numeroTrabajador = 0;
    nombre = "";
    paterno = "";
    materno = "";
    horasExtra = 0.0;
    sueldoBase = 0;
    anioIngreso = 0;

    def __init__(self, numeroTrabajador = 0, nombre = "", paterno = "", materno = "", horasExtra= 0.0, sueldoBase= 0, anioIngreso = 0):
        self.numeroTrabajador = numeroTrabajador
        self.nombre = nombre
        self.paterno = paterno
        self.materno = materno
        self.horasExtra = horasExtra
        self.sueldoBase = sueldoBase
        self.anioIngreso = anioIngreso

    def getNumeroTrabajador(self):
        return self.numeroTrabajador

    def setNumeroTrabajador(self, numeroTrabajador):
        self.numeroTrabajador = numeroTrabajador

    def getNombre(self):
        return self.nombre

    def setNombre(self, nombre):
        self.nombre = nombre

    def getPaterno(self):
        return self.paterno

    def setPaterno(self, paterno):
        self.paterno = paterno

    def getMaterno(self):
        return self.materno

    def setMaterno(self, materno):
        self.materno = materno

    def getHorasExtra(self):
        return self.horasExtra

    def setHorasExtra(self, horasExtra):
        self.horasExtra = horasExtra

    def getSueldoBase(self):
        return self.sueldoBase

    def setSueldoBase(self, sueldoBase):
        self.sueldoBase = sueldoBase

    def getAnioIngreso(self):
        return self.anioIngreso

    def setAnioIngreso(self, anioIngreso):
        self.anioIngreso = anioIngreso

    def calcularSueldo(self):
        total = 0.0;
        total = self.sueldoBase;
        total += self.sueldoBase * ((2022 - self.anioIngreso) * self.PRESTACION_ANUAL);
        total += self.MONTO_H_EXTRA * self.horasExtra;
        return total;

    def __str__(self):
        string = "#: " + str(self.numeroTrabajador) + ", Nombre: " + str(self.nombre) + " " + str(self.paterno) + " " + str(self.materno) + ", Horas extra: " + str(self.horasExtra) + ", Sueldo base: " + str(self.sueldoBase) + ", Anio de ingreso: " + str(self.anioIngreso)
        return string
