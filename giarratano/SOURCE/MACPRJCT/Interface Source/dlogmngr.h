   /*******************************************************/   /*      "C" Language Integrated Production System      */   /*                                                     */   /*            Macintosh Version 3.2  05/12/93          */   /*                                                     */   /*              DIALOG MANAGER HEADER FILE             */   /*******************************************************//*************************************************************//* Purpose:                                                  *//*                                                           *//* Principal Programmer(s):                                  *//*      Gary D. Riley                                        *//*                                                           *//* Contributing Programmer(s):                               *//*                                                           *//* Revision History:                                         *//*                                                           *//*************************************************************/#ifdef LOCALE#undef LOCALE#endif#define DIALOG_BUFFER_SIZE 800#define LIST_KEY_MAX 30#ifdef _DLOGMNGR_SOURCE_#define LOCALE#else#define LOCALE extern#endif#include <Lists.h>   LOCALE void                   CreateDialogManager(int,int);   LOCALE int                    PrepManager(int,VOID *(*)(VOID *),char *(*)(VOID *),int,int,StringPtr);   LOCALE void                   CleanUpAfterManagerDialog(int);   LOCALE pascal Boolean         DefaultConstructManagerClikloop(void);   LOCALE int                    PutSelectionNameInBuffer(void);   LOCALE pascal Boolean         SingleSelectFilter(DialogPtr,EventRecord *,short *);   LOCALE void                   GenericPrintButton(void *(*)(char *),char *(*)(VOID *),char *,char *);   LOCALE void                   GenericDeleteButton1(void *(*)(char *),int (*)(VOID *),int *,int *,StringPtr);   LOCALE int                    GetSingleSelection(ListHandle);   LOCALE void                   GenericDeleteButton2(void *(*)(int),int (*)(VOID *),int *,int *,StringPtr);#ifndef _DLOGMNGR_SOURCE_     extern int                    DoubleClickActive;    extern char                   ListKeySelection[];   extern int                    ListKeyCurrentPos;   extern int                    ListKeyRestartPos;   extern void                 (*UpdateConstructManagerButtonsFunction)(DialogPtr,int);   extern ListHandle             Choices;   extern int                    SelectItem;   extern DialogPtr              ManagerDialog;   extern char                   DialogBuffer[];   extern GrafPtr                DialogManagerSavePort;   extern int                    DV;   extern int                    DH;   #if (MAC_MCW && __powerc) || MAC_SC8   extern RoutineDescriptor      SingleSelectFilterRD;   extern RoutineDescriptor      DefaultConstructManagerClikloopRD;#define SingleSelectFilterRef &SingleSelectFilterRD#define DefaultConstructManagerClikloopRef &DefaultConstructManagerClikloopRD#else#define SingleSelectFilterRef SingleSelectFilter#define DefaultConstructManagerClikloopRef DefaultConstructManagerClikloop#endif#endif