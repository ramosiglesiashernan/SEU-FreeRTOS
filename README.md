FreeRTOS - Conceptos y guía de implementación
Este repositorio contiene documentación y ejemplos detallados sobre el uso de FreeRTOS, enfocándose en la gestión de tareas, colas y la arquitectura del sistema para entornos empotrados.

📋 Descripción General
FreeRTOS es un sistema operativo de tiempo real (RTOS) diseñado para microcontroladores. Esta guía abarca desde los fundamentos de la planificación de tareas hasta la comunicación entre procesos mediante colas.

🛠️ Contenidos Principales
1. Gestión de Tareas (Tasks)
Creación de tareas: Uso de la API para instanciar procesos con diferentes niveles de prioridad.

Estados de las tareas: Descripción de los estados Running, Ready, Blocked y Suspended.

Planificador (Scheduler): Configuración del planificador y comportamiento según la prioridad.

2. Comunicación mediante Colas (Queues)
Implementación: Cómo crear y gestionar colas para el paso de mensajes entre tareas.

Sincronización: Uso de colas para coordinar la ejecución de múltiples procesos.

3. Planificación
Detalles sobre parámetros críticos como configUSE_PREEMPTION para habilitar la expulsión de tareas.

Manejo de cambios de contexto, tanto en llamadas desde tareas como desde interrupciones (ISR) mediante la variable pxHigherPriorityTaskWoken.

4. Temporizadores
El sistema distingue entre temporizadores por hardware (vinculados al chip) y por software (gestionados por el kernel).

5. Gestión de Interrupciones (ISR)
En FreeRTOS, las interrupciones tienen prioridad absoluta sobre cualquier tarea. Una ISR siempre desalojará a la tarea en ejecución, independientemente de la prioridad de esta última.

⚙️ Configuración y Uso
Para utilizar estos conceptos en un proyecto de sistemas empotrados:

Asegúrate de incluir los archivos de cabecera de FreeRTOS necesarios.

Configura el archivo FreeRTOSConfig.h según los requisitos de su hardware.

Define las tareas y colas siguiendo los patrones de diseño descritos en la documentación adjunta.

✒️ Autoría
Documentación elaborada por Julio Molleda del Área de Arquitectura y Tecnología de Computadores de la Universidad de Oviedo.

[!NOTE] Este contenido forma parte del material docente para el Máster Universitario en Ingeniería Informática (Sistemas Empotrados y Ubicuos).
