﻿/*
 * (c) Copyright Ascensio System SIA 2010-2018
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */

#include "Cetab.h"
#include <Binary/CFRecord.h>

namespace XLS
{

unsigned short Cetab::getHighBit() const
{
	return cetab & 0x8000;
}


void Cetab::clrHighBit()
{
	cetab &= 0x7fff;
}


const std::wstring Cetab::getFuncName() const
{
	switch(cetab)
	{
		case 0x0000:
			return L"BEEP";
		case 0x0001:
			return L"OPEN";
		case 0x0002:
			return L"OPEN.LINKS";
		case 0x0003:
			return L"CLOSE.ALL";
		case 0x0004:
			return L"SAVE";
		case 0x0005:
			return L"SAVE.AS";
		case 0x0006:
			return L"FILE.DELETE";
		case 0x0007:
			return L"PAGE.SETUP";
		case 0x0008:
			return L"PRINT";
		case 0x0009:
			return L"PRINTER.SETUP";
		case 0x000A:
			return L"QUIT";
		case 0x000B:
			return L"NEW.WINDOW";
		case 0x000C:
			return L"ARRANGE.ALL";
		case 0x000D:
			return L"WINDOW.SIZE";
		case 0x000E:
			return L"WINDOW.MOVE";
		case 0x000F:
			return L"FULL";
		case 0x0010:
			return L"CLOSE";
		case 0x0011:
			return L"RUN";
		case 0x0016:
			return L"SET.PRINT.AREA";
		case 0x0017:
			return L"SET.PRINT.TITLES";
		case 0x0018:
			return L"SET.PAGE.BREAK";
		case 0x0019:
			return L"REMOVE.PAGE.BREAK";
		case 0x001A:
			return L"FONT";
		case 0x001B:
			return L"DISPLAY";
		case 0x001C:
			return L"PROTECT.DOCUMENT";
		case 0x001D:
			return L"PRECISION";
		case 0x001E:
			return L"A1.R1C1";
		case 0x001F:
			return L"CALCULATE.NOW";
		case 0x0020:
			return L"CALCULATION";
		case 0x0022:
			return L"DATA.FIND";
		case 0x0023:
			return L"EXTRACT";
		case 0x0024:
			return L"DATA.DELETE";
		case 0x0025:
			return L"SET.DATABASE";
		case 0x0026:
			return L"SET.CRITERIA";
		case 0x0027:
			return L"SORT";
		case 0x0028:
			return L"DATA.SERIES";
		case 0x0029:
			return L"TABLE";
		case 0x002A:
			return L"FORMAT.NUMBER";
		case 0x002B:
			return L"ALIGNMENT";
		case 0x002C:
			return L"STYLE";
		case 0x002D:
			return L"BORDER";
		case 0x002E:
			return L"CELL.PROTECTION";
		case 0x002F:
			return L"COLUMN.WIDTH";
		case 0x0030:
			return L"UNDO";
		case 0x0031:
			return L"CUT";
		case 0x0032:
			return L"COPY";
		case 0x0033:
			return L"PASTE";
		case 0x0034:
			return L"CLEAR";
		case 0x0035:
			return L"PASTE.SPECIAL";
		case 0x0036:
			return L"EDIT.DELETE";
		case 0x0037:
			return L"INSERT";
		case 0x0038:
			return L"FILL.RIGHT";
		case 0x0039:
			return L"FILL.DOWN";
		case 0x003D:
			return L"DEFINE.NAME";
		case 0x003E:
			return L"CREATE.NAMES";
		case 0x003F:
			return L"FORMULA.GOTO";
		case 0x0040:
			return L"FORMULA.FIND";
		case 0x0041:
			return L"SELECT.LAST.CELL";
		case 0x0042:
			return L"SHOW.ACTIVE.CELL";
		case 0x0043:
			return L"GALLERY.AREA";
		case 0x0044:
			return L"GALLERY.BAR";
		case 0x0045:
			return L"GALLERY.COLUMN";
		case 0x0046:
			return L"GALLERY.LINE";
		case 0x0047:
			return L"GALLERY.PIE";
		case 0x0048:
			return L"GALLERY.SCATTER";
		case 0x0049:
			return L"COMBINATION";
		case 0x004A:
			return L"PREFERRED";
		case 0x004B:
			return L"ADD.OVERLAY";
		case 0x004C:
			return L"GRIDLINES";
		case 0x004D:
			return L"SET.PREFERRED";
		case 0x004E:
			return L"AXES";
		case 0x004F:
			return L"LEGEND";
		case 0x0050:
			return L"ATTACH.TEXT";
		case 0x0051:
			return L"ADD.ARROW";
		case 0x0052:
			return L"SELECT.CHART";
		case 0x0053:
			return L"SELECT.PLOT.AREA";
		case 0x0054:
			return L"PATTERNS";
		case 0x0055:
			return L"MAIN.CHART";
		case 0x0056:
			return L"OVERLAY";
		case 0x0057:
			return L"SCALE";
		case 0x0058:
			return L"FORMAT.LEGEND";
		case 0x0059:
			return L"FORMAT.TEXT";
		case 0x005A:
			return L"EDIT.REPEAT";
		case 0x005B:
			return L"PARSE";
		case 0x005C:
			return L"JUSTIFY";
		case 0x005D:
			return L"HIDE";
		case 0x005E:
			return L"UNHIDE";
		case 0x005F:
			return L"WORKSPACE";
		case 0x0060:
			return L"FORMULA";
		case 0x0061:
			return L"FORMULA.FILL";
		case 0x0062:
			return L"FORMULA.ARRAY";
		case 0x0063:
			return L"DATA.FIND.NEXT";
		case 0x0064:
			return L"DATA.FIND.PREV";
		case 0x0065:
			return L"FORMULA.FIND.NEXT";
		case 0x0066:
			return L"FORMULA.FIND.PREV";
		case 0x0067:
			return L"ACTIVATE";
		case 0x0068:
			return L"ACTIVATE.NEXT";
		case 0x0069:
			return L"ACTIVATE.PREV";
		case 0x006A:
			return L"UNLOCKED.NEXT";
		case 0x006B:
			return L"UNLOCKED.PREV";
		case 0x006C:
			return L"COPY.PICTURE";
		case 0x006D:
			return L"SELECT";
		case 0x006E:
			return L"DELETE.NAME";
		case 0x006F:
			return L"DELETE.FORMAT";
		case 0x0070:
			return L"VLINE";
		case 0x0071:
			return L"HLINE";
		case 0x0072:
			return L"VPAGE";
		case 0x0073:
			return L"HPAGE";
		case 0x0074:
			return L"VSCROLL";
		case 0x0075:
			return L"HSCROLL";
		case 0x0076:
			return L"ALERT";
		case 0x0077:
			return L"NEW";
		case 0x0078:
			return L"CANCEL.COPY";
		case 0x0079:
			return L"SHOW.CLIPBOARD";
		case 0x007A:
			return L"MESSAGE";
		case 0x007C:
			return L"PASTE.LINK";
		case 0x007D:
			return L"APP.ACTIVATE";
		case 0x007E:
			return L"DELETE.ARROW";
		case 0x007F:
			return L"ROW.HEIGHT";
		case 0x0080:
			return L"FORMAT.MOVE";
		case 0x0081:
			return L"FORMAT.SIZE";
		case 0x0082:
			return L"FORMULA.REPLACE";
		case 0x0083:
			return L"SEND.KEYS";
		case 0x0084:
			return L"SELECT.SPECIAL";
		case 0x0085:
			return L"APPLY.NAMES";
		case 0x0086:
			return L"REPLACE.FONT";
		case 0x0087:
			return L"FREEZE.PANES";
		case 0x0088:
			return L"SHOW.INFO";
		case 0x0089:
			return L"SPLIT";
		case 0x008A:
			return L"ON.WINDOW";
		case 0x008B:
			return L"ON.DATA";
		case 0x008C:
			return L"DISABLE.INPUT";
		case 0x008E:
			return L"OUTLINE";
		case 0x008F:
			return L"LIST.NAMES";
		case 0x0090:
			return L"FILE.CLOSE";
		case 0x0091:
			return L"SAVE.WORKBOOK";
		case 0x0092:
			return L"DATA.FORM";
		case 0x0093:
			return L"COPY.CHART";
		case 0x0094:
			return L"ON.TIME";
		case 0x0095:
			return L"WAIT";
		case 0x0096:
			return L"FORMAT.FONT";
		case 0x0097:
			return L"FILL.UP";
		case 0x0098:
			return L"FILL.LEFT";
		case 0x0099:
			return L"DELETE.OVERLAY";
		case 0x009B:
			return L"SHORT.MENUS";
		case 0x009F:
			return L"SET.UPDATE.STATUS";
		case 0x00A1:
			return L"COLOR.PALETTE";
		case 0x00A2:
			return L"DELETE.STYLE";
		case 0x00A3:
			return L"WINDOW.RESTORE";
		case 0x00A4:
			return L"WINDOW.MAXIMIZE";
		case 0x00A6:
			return L"CHANGE.LINK";
		case 0x00A7:
			return L"CALCULATE.DOCUMENT";
		case 0x00A8:
			return L"ON.KEY";
		case 0x00A9:
			return L"APP.RESTORE";
		case 0x00AA:
			return L"APP.MOVE";
		case 0x00AB:
			return L"APP.SIZE";
		case 0x00AC:
			return L"APP.MINIMIZE";
		case 0x00AD:
			return L"APP.MAXIMIZE";
		case 0x00AE:
			return L"BRING.TO.FRONT";
		case 0x00AF:
			return L"SEND.TO.BACK";
		case 0x00B9:
			return L"MAIN.CHART.TYPE";
		case 0x00BA:
			return L"OVERLAY.CHART.TYPE";
		case 0x00BB:
			return L"SELECT.END";
		case 0x00BC:
			return L"OPEN.MAIL";
		case 0x00BD:
			return L"SEND.MAIL";
		case 0x00BE:
			return L"STANDARD.FONT";
		case 0x00BF:
			return L"CONSOLIDATE";
		case 0x00C0:
			return L"SORT.SPECIAL";
		case 0x00C1:
			return L"GALLERY.3D.AREA";
		case 0x00C2:
			return L"GALLERY.3D.COLUMN";
		case 0x00C3:
			return L"GALLERY.3D.LINE";
		case 0x00C4:
			return L"GALLERY.3D.PIE";
		case 0x00C5:
			return L"VIEW.3D";
		case 0x00C6:
			return L"GOAL.SEEK";
		case 0x00C7:
			return L"WORKGROUP";
		case 0x00C8:
			return L"FILL.GROUP";
		case 0x00C9:
			return L"UPDATE.LINK";
		case 0x00CA:
			return L"PROMOTE";
		case 0x00CB:
			return L"DEMOTE";
		case 0x00CC:
			return L"SHOW.DETAIL";
		case 0x00CE:
			return L"UNGROUP";
		case 0x00CF:
			return L"OBJECT.PROPERTIES";
		case 0x00D0:
			return L"SAVE.NEW.OBJECT";
		case 0x00D1:
			return L"SHARE";
		case 0x00D2:
			return L"SHARE.NAME";
		case 0x00D3:
			return L"DUPLICATE";
		case 0x00D4:
			return L"APPLY.STYLE";
		case 0x00D5:
			return L"ASSIGN.TO.OBJECT";
		case 0x00D6:
			return L"OBJECT.PROTECTION";
		case 0x00D7:
			return L"HIDE.OBJECT";
		case 0x00D8:
			return L"SET.EXTRACT";
		case 0x00D9:
			return L"CREATE.PUBLISHER";
		case 0x00DA:
			return L"SUBSCRIBE.TO";
		case 0x00DB:
			return L"ATTRIBUTES";
		case 0x00DC:
			return L"SHOW.TOOLBAR";
		case 0x00DE:
			return L"PRINT.PREVIEW";
		case 0x00DF:
			return L"EDIT.COLOR";
		case 0x00E0:
			return L"SHOW.LEVELS";
		case 0x00E1:
			return L"FORMAT.MAIN";
		case 0x00E2:
			return L"FORMAT.OVERLAY";
		case 0x00E3:
			return L"ON.RECALC";
		case 0x00E4:
			return L"EDIT.SERIES";
		case 0x00E5:
			return L"DEFINE.STYLE";
		case 0x00F0:
			return L"LINE.PRINT";
		case 0x00F3:
			return L"ENTER.DATA";
		case 0x00F9:
			return L"GALLERY.RADAR";
		case 0x00FA:
			return L"MERGE.STYLES";
		case 0x00FB:
			return L"EDITION.OPTIONS";
		case 0x00FC:
			return L"PASTE.PICTURE";
		case 0x00FD:
			return L"PASTE.PICTURE.LINK";
		case 0x00FE:
			return L"SPELLING";
		case 0x0100:
			return L"ZOOM";
		case 0x0103:
			return L"INSERT.OBJECT";
		case 0x0104:
			return L"WINDOW.MINIMIZE";
		case 0x0109:
			return L"SOUND.NOTE";
		case 0x010A:
			return L"SOUND.PLAY";
		case 0x010B:
			return L"FORMAT.SHAPE";
		case 0x010C:
			return L"EXTEND.POLYGON";
		case 0x010D:
			return L"FORMAT.AUTO";
		case 0x0110:
			return L"GALLERY.3D.BAR";
		case 0x0111:
			return L"GALLERY.3D.SURFACE";
		case 0x0112:
			return L"FILL.AUTO";
		case 0x0114:
			return L"CUSTOMIZE.TOOLBAR";
		case 0x0115:
			return L"ADD.TOOL";
		case 0x0116:
			return L"EDIT.OBJECT";
		case 0x0117:
			return L"ON.DOUBLECLICK";
		case 0x0118:
			return L"ON.ENTRY";
		case 0x0119:
			return L"WORKBOOK.ADD";
		case 0x011A:
			return L"WORKBOOK.MOVE";
		case 0x011B:
			return L"WORKBOOK.COPY";
		case 0x011C:
			return L"WORKBOOK.OPTIONS";
		case 0x011D:
			return L"SAVE.WORKSPACE";
		case 0x0120:
			return L"CHART.WIZARD";
		case 0x0121:
			return L"DELETE.TOOL";
		case 0x0122:
			return L"MOVE.TOOL";
		case 0x0123:
			return L"WORKBOOK.SELECT";
		case 0x0124:
			return L"WORKBOOK.ACTIVATE";
		case 0x0125:
			return L"ASSIGN.TO.TOOL";
		case 0x0127:
			return L"COPY.TOOL";
		case 0x0128:
			return L"RESET.TOOL";
		case 0x0129:
			return L"CONSTRAIN.NUMERIC";
		case 0x012A:
			return L"PASTE.TOOL";
		case 0x012E:
			return L"WORKBOOK.NEW";
		case 0x0131:
			return L"SCENARIO.CELLS";
		case 0x0132:
			return L"SCENARIO.DELETE";
		case 0x0133:
			return L"SCENARIO.ADD";
		case 0x0134:
			return L"SCENARIO.EDIT";
		case 0x0135:
			return L"SCENARIO.SHOW";
		case 0x0136:
			return L"SCENARIO.SHOW.NEXT";
		case 0x0137:
			return L"SCENARIO.SUMMARY";
		case 0x0138:
			return L"PIVOT.TABLE.WIZARD";
		case 0x0139:
			return L"PIVOT.FIELD.PROPERTIES";
		case 0x013A:
			return L"PIVOT.FIELD";
		case 0x013B:
			return L"PIVOT.ITEM";
		case 0x013C:
			return L"PIVOT.ADD.FIELDS";
		case 0x013E:
			return L"OPTIONS.CALCULATION";
		case 0x013F:
			return L"OPTIONS.EDIT";
		case 0x0140:
			return L"OPTIONS.VIEW";
		case 0x0141:
			return L"ADDIN.MANAGER";
		case 0x0142:
			return L"MENU.EDITOR";
		case 0x0143:
			return L"ATTACH.TOOLBARS";
		case 0x0145:
			return L"OPTIONS.CHART";
		case 0x0148:
			return L"VBA.INSERT.FILE";
		case 0x014A:
			return L"VBA.PROCEDURE.DEFINITION";
		case 0x0150:
			return L"ROUTING.SLIP";
		case 0x0152:
			return L"ROUTE.DOCUMENT";
		case 0x0153:
			return L"MAIL.LOGON";
		case 0x0156:
			return L"INSERT.PICTURE";
		case 0x0157:
			return L"EDIT.TOOL";
		case 0x0158:
			return L"GALLERY.DOUGHNUT";
		case 0x015E:
			return L"CHART.TREND";
		case 0x0160:
			return L"PIVOT.ITEM.PROPERTIES";
		case 0x0162:
			return L"WORKBOOK.INSERT";
		case 0x0163:
			return L"OPTIONS.TRANSITION";
		case 0x0164:
			return L"OPTIONS.GENERAL";
		case 0x0172:
			return L"FILTER.ADVANCED";
		case 0x0175:
			return L"MAIL.ADD.MAILER";
		case 0x0176:
			return L"MAIL.DELETE.MAILER";
		case 0x0177:
			return L"MAIL.REPLY";
		case 0x0178:
			return L"MAIL.REPLY.ALL";
		case 0x0179:
			return L"MAIL.FORWARD";
		case 0x017A:
			return L"MAIL.NEXT.LETTER";
		case 0x017B:
			return L"DATA.LABEL";
		case 0x017C:
			return L"INSERT.TITLE";
		case 0x017D:
			return L"FONT.PROPERTIES";
		case 0x017E:
			return L"MACRO.OPTIONS";
		case 0x017F:
			return L"WORKBOOK.HIDE";
		case 0x0180:
			return L"WORKBOOK.UNHIDE";
		case 0x0181:
			return L"WORKBOOK.DELETE";
		case 0x0182:
			return L"WORKBOOK.NAME";
		case 0x0184:
			return L"GALLERY.CUSTOM";
		case 0x0186:
			return L"ADD.CHART.AUTOFORMAT";
		case 0x0187:
			return L"DELETE.CHART.AUTOFORMAT";
		case 0x0188:
			return L"CHART.ADD.DATA";
		case 0x0189:
			return L"AUTO.OUTLINE";
		case 0x018A:
			return L"TAB.ORDER";
		case 0x018B:
			return L"SHOW.DIALOG";
		case 0x018C:
			return L"SELECT.ALL";
		case 0x018D:
			return L"UNGROUP.SHEETS";
		case 0x018E:
			return L"SUBTOTAL.CREATE";
		case 0x018F:
			return L"SUBTOTAL.REMOVE";
		case 0x0190:
			return L"RENAME.OBJECT";
		case 0x019C:
			return L"WORKBOOK.SCROLL";
		case 0x019D:
			return L"WORKBOOK.NEXT";
		case 0x019E:
			return L"WORKBOOK.PREV";
		case 0x019F:
			return L"WORKBOOK.TAB.SPLIT";
		case 0x01A0:
			return L"FULL.SCREEN";
		case 0x01A1:
			return L"WORKBOOK.PROTECT";
		case 0x01A4:
			return L"SCROLLBAR.PROPERTIES";
		case 0x01A5:
			return L"PIVOT.SHOW.PAGES";
		case 0x01A6:
			return L"TEXT.TO.COLUMNS";
		case 0x01A7:
			return L"FORMAT.CHARTTYPE";
		case 0x01A8:
			return L"LINK.FORMAT";
		case 0x01A9:
			return L"TRACER.DISPLAY";
		case 0x01AE:
			return L"TRACER.NAVIGATE";
		case 0x01AF:
			return L"TRACER.CLEAR";
		case 0x01B0:
			return L"TRACER.ERROR";
		case 0x01B1:
			return L"PIVOT.FIELD.GROUP";
		case 0x01B2:
			return L"PIVOT.FIELD.UNGROUP";
		case 0x01B3:
			return L"CHECKBOX.PROPERTIES";
		case 0x01B4:
			return L"LABEL.PROPERTIES";
		case 0x01B5:
			return L"LISTBOX.PROPERTIES";
		case 0x01B6:
			return L"EDITBOX.PROPERTIES";
		case 0x01B7:
			return L"PIVOT.REFRESH";
		case 0x01B8:
			return L"LINK.COMBO";
		case 0x01B9:
			return L"OPEN.TEXT";
		case 0x01BA:
			return L"HIDE.DIALOG";
		case 0x01BB:
			return L"SET.DIALOG.FOCUS";
		case 0x01BC:
			return L"ENABLE.OBJECT";
		case 0x01BD:
			return L"PUSHBUTTON.PROPERTIES";
		case 0x01BE:
			return L"SET.DIALOG.DEFAULT";
		case 0x01BF:
			return L"FILTER";
		case 0x01C0:
			return L"FILTER.SHOW.ALL";
		case 0x01C1:
			return L"CLEAR.OUTLINE";
		case 0x01C2:
			return L"FUNCTION.WIZARD";
		case 0x01C3:
			return L"ADD.LIST.ITEM";
		case 0x01C4:
			return L"SET.LIST.ITEM";
		case 0x01C5:
			return L"REMOVE.LIST.ITEM";
		case 0x01C6:
			return L"SELECT.LIST.ITEM";
		case 0x01C7:
			return L"SET.CONTROL.VALUE";
		case 0x01C8:
			return L"SAVE.COPY.AS";
		case 0x01CA:
			return L"OPTIONS.LISTS.ADD";
		case 0x01CB:
			return L"OPTIONS.LISTS.DELETE";
		case 0x01CC:
			return L"SERIES.AXES";
		case 0x01CD:
			return L"SERIES.X";
		case 0x01CE:
			return L"SERIES.Y";
		case 0x01CF:
			return L"ERRORBAR.X";
		case 0x01D0:
			return L"ERRORBAR.Y";
		case 0x01D1:
			return L"FORMAT.CHART";
		case 0x01D2:
			return L"SERIES.ORDER";
		case 0x01D3:
			return L"MAIL.LOGOFF";
		case 0x01D4:
			return L"CLEAR.ROUTING.SLIP";
		case 0x01D5:
			return L"APP.ACTIVATE.MICROSOFT";
		case 0x01D6:
			return L"MAIL.EDIT.MAILER";
		case 0x01D7:
			return L"ON.SHEET";
		case 0x01D8:
			return L"STANDARD.WIDTH";
		case 0x01D9:
			return L"SCENARIO.MERGE";
		case 0x01DA:
			return L"SUMMARY.INFO";
		case 0x01DB:
			return L"FIND.FILE";
		case 0x01DC:
			return L"ACTIVE.CELL.FONT";
		case 0x01DD:
			return L"ENABLE.TIPWIZARD";
		case 0x01DE:
			return L"VBA.MAKE.ADDIN";
		case 0x01E0:
			return L"INSERTDATATABLE";
		case 0x01E1:
			return L"WORKGROUP.OPTIONS";
		case 0x01E2:
			return L"MAIL.SEND.MAILER";
		case 0x01E5:
			return L"AUTOCORRECT";
		case 0x01E9:
			return L"POST.DOCUMENT";
		case 0x01EB:
			return L"PICKLIST";
		case 0x01ED:
			return L"VIEW.SHOW";
		case 0x01EE:
			return L"VIEW.DEFINE";
		case 0x01EF:
			return L"VIEW.DELETE";
		case 0x01FD:
			return L"SHEET.BACKGROUND";
		case 0x01FE:
			return L"INSERT.MAP.OBJECT";
		case 0x01FF:
			return L"OPTIONS.MENONO";
		case 0x0205:
			return L"MSOCHECKS";
		case 0x0206:
			return L"NORMAL";
		case 0x0207:
			return L"LAYOUT";
		case 0x0208:
			return L"RM.PRINT.AREA";
		case 0x0209:
			return L"CLEAR.PRINT.AREA";
		case 0x020A:
			return L"ADD.PRINT.AREA";
		case 0x020B:
			return L"MOVE.BRK";
		case 0x0221:
			return L"HIDECURR.NOTE";
		case 0x0222:
			return L"HIDEALL.NOTES";
		case 0x0223:
			return L"DELETE.NOTE";
		case 0x0224:
			return L"TRAVERSE.NOTES";
		case 0x0225:
			return L"ACTIVATE.NOTES";
		case 0x026C:
			return L"PROTECT.REVISIONS";
		case 0x026D:
			return L"UNPROTECT.REVISIONS";
		case 0x0287:
			return L"OPTIONS.ME";
		case 0x028D:
			return L"WEB.PUBLISH";
		case 0x029B:
			return L"NEWWEBQUERY";
		case 0x02A1:
			return L"PIVOT.TABLE.CHART";
		case 0x02F1:
			return L"OPTIONS.SAVE";
		case 0x02F3:
			return L"OPTIONS.SPELL";
		case 0x0328:
			return L"HIDEALL.INKANNOTS";
		default:
			return L"";
	}
}

} // namespace XLS

