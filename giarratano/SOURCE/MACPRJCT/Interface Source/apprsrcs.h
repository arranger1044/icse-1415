   /*******************************************************/   /*      "C" Language Integrated Production System      */   /*                                                     */   /*            Macintosh Version 3.2  08/22/96          */   /*                                                     */   /*          APPLICATION RESOURCES HEADER FILE          */   /*******************************************************//*************************************************************//* Purpose:                                                  *//*                                                           *//* Principal Programmer(s):                                  *//*      Gary D. Riley                                        *//*                                                           *//* Contributing Programmer(s):                               *//*                                                           *//* Revision History:                                         *//*                                                           *//*************************************************************/#ifndef _H_apprsrcs#define _H_apprsrcs#ifdef LOCALE#undef LOCALE#endif#include <Menus.h>#include <Quickdraw.h>#ifdef _APPRSRCS_SOURCE_#define LOCALE#else#define LOCALE extern#endif   LOCALE void                   SetUpResources(void);#ifndef _APPRSRCS_SOURCE_      extern MenuHandle             AppleMenu;   extern MenuHandle             FileMenu;   extern MenuHandle             EditMenu;   extern MenuHandle             BufferMenu;   extern MenuHandle             CommandsMenu;   extern MenuHandle             BrowseMenu;   extern MenuHandle             WindowMenu;   extern MenuHandle             StrategyMenu;   extern MenuHandle             SalienceMenu;   extern MenuHandle             ModuleMenu;   extern MenuHandle             ConstructListMenu;      extern CursHandle             ReadCursor;   extern CursHandle             Panda1Cursor;   extern CursHandle             Panda2Cursor;   extern CursHandle             Atom1Cursor;   extern CursHandle             Atom2Cursor;   extern CursHandle             Atom3Cursor;   extern CursHandle             Atom4Cursor;   extern CursHandle             Atom5Cursor;   extern CursHandle             Atom6Cursor;   extern CursHandle             Atom7Cursor;   extern CursHandle             Atom8Cursor;   extern PicHandle              CompileAreaBWPic;   extern PicHandle              BatchAreaBWPic;   extern PicHandle              CompileAreaColorPic;   extern PicHandle              BatchAreaColorPic;   extern PicHandle              CompileAreaHilitePic;   extern PicHandle              BatchAreaHilitePic;      extern PicHandle              ConstructsAreaBWPic;   extern PicHandle              ConstructsAreaColorPic;   extern PicHandle              ConstructsAreaBWHilitePic;   extern PicHandle              ConstructsAreaColorHilitePic;    #endif#endif