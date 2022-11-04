// Single Input and Single Output
#ifndef siso_drv_h
#define siso_drv_h

#include "Arduino.h"
#include "mmf2_module.h"

void sisoCreate(void);
void sisoDestroy(void);
int  sisoStart(void);
void sisoStop(void);
void sisoPause(void);
void sisoResume(void);
void sisoRegIn(mm_context_t*);
void sisoRegOut(mm_context_t*);
void sisoSetStackSize(void);
void sisoSetTaskPriority(void);

#endif
