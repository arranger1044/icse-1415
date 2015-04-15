   /*******************************************************/   /*      "C" Language Integrated Production System      */   /*                                                     */   /*             CLIPS Version 6.05  04/09/97            */   /*                                                     */   /*               FACT COMMANDS HEADER FILE             */   /*******************************************************//*************************************************************//* Purpose:                                                  *//*                                                           *//* Principal Programmer(s):                                  *//*      Gary D. Riley                                        *//*                                                           *//* Contributing Programmer(s):                               *//*                                                           *//* Revision History:                                         *//*                                                           *//*************************************************************/#ifndef _H_factcom#define _H_factcom#ifndef _H_evaluatn#include "evaluatn.h"#endif  #ifdef LOCALE#undef LOCALE#endif#ifdef _FACTCOM_SOURCE_#define LOCALE#else#define LOCALE extern#endif#if ANSI_COMPILER    LOCALE VOID                           FactCommandDefinitions(void);   LOCALE VOID                           AssertCommand(DATA_OBJECT_PTR);   LOCALE VOID                           RetractCommand(void);   LOCALE VOID                           AssertStringFunction(DATA_OBJECT_PTR);    LOCALE VOID                           FactsCommand(void);   LOCALE VOID                           Facts(char *,VOID *,long,long,long);   LOCALE int                            SetFactDuplicationCommand(void);   LOCALE int                            GetFactDuplicationCommand(void);   LOCALE int                            SaveFactsCommand(void);   LOCALE int                            LoadFactsCommand(void);   LOCALE int                            SaveFacts(char *,int,struct expr *);   LOCALE int                            LoadFacts(char *);   LOCALE int                            LoadFactsFromString(char *,int);   LOCALE long int                       FactIndexFunction(void);#else     LOCALE VOID                           FactCommandDefinitions();   LOCALE VOID                           AssertCommand();   LOCALE VOID                           RetractCommand();   LOCALE VOID                           AssertStringFunction();    LOCALE VOID                           FactsCommand();   LOCALE VOID                           Facts();   LOCALE int                            SetFactDuplicationCommand();   LOCALE int                            GetFactDuplicationCommand();   LOCALE int                            SaveFactsCommand();   LOCALE int                            LoadFactsCommand();   LOCALE int                            SaveFacts();   LOCALE int                            LoadFacts();   LOCALE int                            LoadFactsFromString();   LOCALE long int                       FactIndexFunction();#endif#endif