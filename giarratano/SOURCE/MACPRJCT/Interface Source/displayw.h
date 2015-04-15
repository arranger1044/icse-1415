   /*******************************************************/   /*      "C" Language Integrated Production System      */   /*                                                     */   /*            Macintosh Version 3.2  05/12/93          */   /*                                                     */   /*             DISPLAY WINDOW HEADER FILE              */   /*******************************************************//*************************************************************//* Purpose:                                                  *//*                                                           *//* Principal Programmer(s):                                  *//*      Gary D. Riley                                        *//*                                                           *//* Contributing Programmer(s):                               *//*                                                           *//* Revision History:                                         *//*                                                           *//*************************************************************/#ifndef _H_displayw#define _H_displayw#if MAC_MCW || MAC_SC7 || MAC_MPW || MAC_SC8#include <Printing.h>#else#include <PrintTraps.h>#endif#ifndef BOOLEAN#define BOOLEAN int#endif/***************//* DEFINITIONS *//***************/#define VIRTUAL_HORIZONTAL_WIDTH    2000#define MAX_DISPLAY_LINES           1800#define DISPLAY_WINDOW                 3#define STANDARD_LINE_LENGTH          40#define TOP_PRINT_MARGIN              20#define LEFT_PRINT_MARGIN             20#define BOTTOM_PRINT_MARGIN           20/**************//* STRUCTURES *//**************/struct lineRecord  {   int lineSize;   int insertPoint;   char *lineInfo;  };#ifdef LOCALE#undef LOCALE#endif#ifdef _DISPLAYW_SOURCE_#define LOCALE#else#define LOCALE extern#endif   LOCALE void                   GrowDisplayWindow(WindowPtr);   LOCALE void                   ShowDisplayEnd(int);   LOCALE void                   ShowDisplayBegin(int);   LOCALE void                   SelectDisplayWindow(void);   LOCALE void                   ClearDisplayWindow(void);   LOCALE short                  DoDisplayContent(EventRecord *,WindowPtr);   LOCALE void                   DisplayPaste(void);   LOCALE void                   DisplayCopy(void);   LOCALE void                   DoDisplayActivate(WindowPtr);   LOCALE void                   DoDisplayDeactivate(WindowPtr);   LOCALE void                   FixDisplayCursor(WindowPtr);   LOCALE void                   CreateDisplayWindow(int (*)(WindowPtr,EventRecord *,THPrint,char,int));   LOCALE void                   UpdateDisplayWindow(WindowPtr);   LOCALE void                   DrawCursor(void);   LOCALE Boolean                CursorShouldBeDrawn(void);   LOCALE char                  *DisplaySelectionText(long *);   LOCALE RgnHandle              DisplaySelectionRegion(WindowPtr);#ifndef _DISPLAYW_SOURCE_   extern WindowPtr              DisplayWindow;   extern int                    LinesInUse;   extern ControlHandle          DisplayVScroll;   extern ControlHandle          DisplayHScroll;   extern int                    CharacterWidth;   extern int                    LinesInDisplayWindow;   extern int                    CursorVisible;   extern int                    SelectionLineStart;   extern int                    SelectionLineEnd;   extern int                    SelectionCharStart;   extern int                    SelectionCharEnd;   extern int                    DisplayLineHeight;   extern int                    TopDisplayNumber;   extern int                    LeftWindowMargin;   extern int                    LeftMarginNumber;   extern int                    LinesLost;   extern struct lineRecord      DisplayText[];   extern int                    ZeroDisplayLine;   extern int                    AppendDisplayLine;   extern short                  CursorHideLock;   extern int                    DisplayStartLine;#endif#endif