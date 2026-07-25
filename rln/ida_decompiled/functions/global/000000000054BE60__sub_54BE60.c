/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054BE60
 * Mangled: sub_54BE60
 * Demangled: sub_54BE60
 *
 * Callers: 2
 *   0x000000000052C89C  sub_52C89C
 *   0x000000000052C8FC  sub_52C8FC
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 98
 *   insn=0x000000000054BE78 string=0x000000000059E388 "%H:%M:%S"
 *   insn=0x000000000054BE7C string=0x000000000054BE80 " "
 *   insn=0x000000000054BE80 string=0x000000000054BE84 " "
 *   insn=0x000000000054BE84 string=0x000000000054BE88 "c "
 *   insn=0x000000000054BE88 string=0x000000000054BE8C " ("
 *   insn=0x000000000054BE90 string=0x000000000054BE98 " ,"
 *   insn=0x000000000054BE90 string=0x000000000059EE48 "Sunday"
 *   insn=0x000000000054BE9C string=0x000000000054BEA0 "#"
 *   insn=0x000000000054BE9C string=0x000000000059EE50 "Monday"
 *   insn=0x000000000054BEA4 string=0x000000000054BEA8 " 0"
 *   insn=0x000000000054BEAC string=0x000000000054BEB0 "#"
 *   insn=0x000000000054BEAC string=0x000000000059EE58 "Tuesday"
 *   insn=0x000000000054BEB4 string=0x000000000054BEB8 " 4"
 *   insn=0x000000000054BEBC string=0x000000000059EE60 "Wednesday"
 *   insn=0x000000000054BEC0 string=0x000000000059EE38 "AM"
 *   insn=0x000000000054BEC4 string=0x000000000054BEC8 " 8"
 *   insn=0x000000000054BECC string=0x000000000054BED0 "c"
 *   insn=0x000000000054BECC string=0x000000000059EE70 "Thursday"
 *   insn=0x000000000054BED4 string=0x000000000054BED8 " <"
 *   insn=0x000000000054BEDC string=0x000000000054BEE0 "# "
 *   insn=0x000000000054BEDC string=0x000000000059EE80 "Friday"
 *   insn=0x000000000054BEE4 string=0x000000000054BEE8 " @"
 *   insn=0x000000000054BEEC string=0x000000000059EE88 "Saturday"
 *   insn=0x000000000054BEF0 string=0x000000000059E370 "%m/%d/%y"
 *   insn=0x000000000054BEF4 string=0x000000000054BEF8 " D"
 *   insn=0x000000000054BEFC string=0x000000000059EE98 "Sun"
 *   insn=0x000000000054BF00 string=0x000000000059EEF8 "May"
 *   insn=0x000000000054BF04 string=0x000000000054BF08 " H"
 *   insn=0x000000000054BF0C string=0x000000000059EEA0 "Mon"
 *   insn=0x000000000054BF10 string=0x000000000059EE40 "PM"
 *   insn=0x000000000054BF14 string=0x000000000054BF18 " L"
 *   insn=0x000000000054BF1C string=0x000000000059EEA8 "Tue"
 *   insn=0x000000000054BF24 string=0x000000000054BF28 " P"
 *   insn=0x000000000054BF2C string=0x000000000054BF30 "B"
 *   insn=0x000000000054BF2C string=0x000000000059EEB0 "Wed"
 *   insn=0x000000000054BF34 string=0x000000000054BF38 " T"
 *   insn=0x000000000054BF3C string=0x000000000054BF40 "$"
 *   insn=0x000000000054BF3C string=0x000000000059EEB8 "Thu"
 *   insn=0x000000000054BF44 string=0x000000000054BF48 " X"
 *   insn=0x000000000054BF4C string=0x000000000054BF50 "$"
 *   insn=0x000000000054BF4C string=0x000000000059EEC0 "Fri"
 *   insn=0x000000000054BF54 string=0x000000000054BF58 " \"
 *   insn=0x000000000054BF5C string=0x000000000054BF60 "c"
 *   insn=0x000000000054BF5C string=0x000000000059EEC8 "Sat"
 *   insn=0x000000000054BF64 string=0x000000000054BF68 " `"
 *   insn=0x000000000054BF6C string=0x000000000054BF70 "#$"
 *   insn=0x000000000054BF6C string=0x000000000059EED0 "January"
 *   insn=0x000000000054BF74 string=0x000000000054BF78 " d"
 *   insn=0x000000000054BF7C string=0x000000000054BF80 ""t"
 *   insn=0x000000000054BF7C string=0x000000000059EED8 "February"
 *   insn=0x000000000054BF84 string=0x000000000054BF88 " h"
 *   insn=0x000000000054BF8C string=0x000000000054BF94 " l"
 *   insn=0x000000000054BF8C string=0x000000000059EEE8 "March"
 *   insn=0x000000000054BF98 string=0x000000000054BFA0 " p"
 *   insn=0x000000000054BF98 string=0x000000000059EEF0 "April"
 *   insn=0x000000000054BFA4 string=0x000000000054BFAC " x"
 *   insn=0x000000000054BFA4 string=0x000000000059EF00 "June"
 *   insn=0x000000000054BFB0 string=0x000000000054BFB8 " |"
 *   insn=0x000000000054BFB0 string=0x000000000059EF08 "July"
 *   insn=0x000000000054BFBC string=0x000000000054BFC4 " "
 *   insn=0x000000000054BFBC string=0x000000000059EF10 "August"
 *   insn=0x000000000054BFC8 string=0x000000000054BFD0 " "
 *   insn=0x000000000054BFC8 string=0x000000000059EF18 "September"
 *   insn=0x000000000054BFD4 string=0x000000000054BFDC " "
 *   insn=0x000000000054BFD4 string=0x000000000059EF28 "October"
 *   insn=0x000000000054BFE0 string=0x000000000054BFE8 " "
 *   insn=0x000000000054BFE0 string=0x000000000059EF30 "November"
 *   insn=0x000000000054BFEC string=0x000000000054BFF0 """
 *   insn=0x000000000054BFEC string=0x000000000059EF40 "December"
 *   insn=0x000000000054BFF4 string=0x000000000054BFF8 " "
 *   insn=0x000000000054BFFC string=0x000000000059EF50 "Jan"
 *   insn=0x000000000054C004 string=0x000000000054C008 " "
 *   insn=0x000000000054C00C string=0x000000000054C014 " "
 *   insn=0x000000000054C00C string=0x000000000059EF58 "Feb"
 *   insn=0x000000000054C018 string=0x000000000054C020 " "
 *   insn=0x000000000054C018 string=0x000000000059EF60 "Mar"
 *   insn=0x000000000054C024 string=0x000000000054C02C " "
 *   insn=0x000000000054C024 string=0x000000000059EF68 "Apr"
 *   insn=0x000000000054C030 string=0x000000000054C038 " "
 *   insn=0x000000000054C030 string=0x000000000059EF70 "Jun"
 *   insn=0x000000000054C03C string=0x000000000054C044 " "
 *   insn=0x000000000054C03C string=0x000000000059EF78 "Jul"
 *   insn=0x000000000054C048 string=0x000000000054C050 " "
 *   insn=0x000000000054C048 string=0x000000000059EF80 "Aug"
 *   insn=0x000000000054C054 string=0x000000000054C05C " "
 *   insn=0x000000000054C054 string=0x000000000059EF88 "Sep"
 *   insn=0x000000000054C060 string=0x000000000054C068 " "
 *   insn=0x000000000054C060 string=0x000000000059EF90 "Oct"
 *   insn=0x000000000054C06C string=0x000000000054C074 " "
 *   insn=0x000000000054C06C string=0x000000000059EF98 "Nov"
 *   insn=0x000000000054C078 string=0x000000000054C080 " "
 *   insn=0x000000000054C078 string=0x000000000059EFA0 "Dec"
 *   insn=0x000000000054C090 string=0x000000000054C094 "S"
 *   insn=0x000000000054C094 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000054C0A0 string=0x000000000054C0A4 "B8G"
 *   insn=0x000000000054C0A8 string=0x000000000054C0AC "B@"
 *   insn=0x000000000054C16C string=0x000000000054C170 "`\n"
 *   insn=0x000000000054C170 string=0x000000000054C174 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall sub_54BE60(__int64 a1)
{
  _QWORD *v1; // x1
  const char *result; // x0
  __int64 v4; // x0

  v1 = *(_QWORD **)(a1 + 16);
  if ( !v1 )
  {
    v4 = operator new(0x190u);
    *(_DWORD *)(v4 + 8) = 0;
    v1 = (_QWORD *)v4;
    *(_QWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)v4 = off_6B6E00;
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_QWORD *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 80) = 0;
    *(_QWORD *)(v4 + 88) = 0;
    *(_QWORD *)(v4 + 96) = 0;
    *(_QWORD *)(v4 + 104) = 0;
    *(_QWORD *)(v4 + 112) = 0;
    *(_QWORD *)(v4 + 120) = 0;
    *(_QWORD *)(v4 + 128) = 0;
    *(_QWORD *)(v4 + 136) = 0;
    *(_QWORD *)(v4 + 144) = 0;
    *(_QWORD *)(v4 + 152) = 0;
    *(_QWORD *)(v4 + 160) = 0;
    *(_QWORD *)(v4 + 168) = 0;
    *(_QWORD *)(v4 + 176) = 0;
    *(_QWORD *)(v4 + 184) = 0;
    *(_QWORD *)(v4 + 192) = 0;
    *(_QWORD *)(v4 + 200) = 0;
    *(_QWORD *)(v4 + 208) = 0;
    *(_QWORD *)(v4 + 216) = 0;
    *(_QWORD *)(v4 + 224) = 0;
    *(_QWORD *)(v4 + 232) = 0;
    *(_QWORD *)(v4 + 240) = 0;
    *(_QWORD *)(v4 + 248) = 0;
    *(_QWORD *)(v4 + 256) = 0;
    *(_QWORD *)(v4 + 264) = 0;
    *(_QWORD *)(v4 + 272) = 0;
    *(_QWORD *)(v4 + 280) = 0;
    *(_QWORD *)(v4 + 288) = 0;
    *(_QWORD *)(v4 + 296) = 0;
    *(_QWORD *)(v4 + 304) = 0;
    *(_QWORD *)(v4 + 312) = 0;
    *(_QWORD *)(v4 + 320) = 0;
    *(_QWORD *)(v4 + 328) = 0;
    *(_QWORD *)(v4 + 336) = 0;
    *(_QWORD *)(v4 + 344) = 0;
    *(_QWORD *)(v4 + 352) = 0;
    *(_QWORD *)(v4 + 360) = 0;
    *(_QWORD *)(v4 + 368) = 0;
    *(_QWORD *)(v4 + 376) = 0;
    *(_QWORD *)(v4 + 384) = 0;
    *(_BYTE *)(v4 + 392) = 0;
    *(_QWORD *)(a1 + 16) = v4;
  }
  v1[6] = "";
  v1[7] = "";
  v1[10] = "";
  v1[11] = "Sunday";
  v1[4] = "%H:%M:%S";
  v1[12] = "Monday";
  v1[5] = "%H:%M:%S";
  v1[13] = "Tuesday";
  v1[14] = "Wednesday";
  v1[15] = "Thursday";
  v1[8] = "AM";
  v1[16] = "Friday";
  v1[17] = "Saturday";
  v1[18] = "Sun";
  v1[19] = "Mon";
  v1[20] = "Tue";
  v1[21] = "Wed";
  v1[2] = "%m/%d/%y";
  v1[22] = "Thu";
  v1[3] = "%m/%d/%y";
  v1[23] = "Fri";
  v1[24] = "Sat";
  v1[9] = "PM";
  v1[25] = "January";
  v1[29] = "May";
  v1[26] = "February";
  v1[27] = "March";
  v1[28] = "April";
  v1[30] = "June";
  v1[31] = "July";
  v1[32] = "August";
  v1[33] = "September";
  v1[34] = "October";
  v1[35] = "November";
  v1[41] = "May";
  v1[36] = "December";
  v1[37] = "Jan";
  v1[38] = "Feb";
  v1[39] = "Mar";
  v1[40] = "Apr";
  v1[42] = "Jun";
  v1[43] = "Jul";
  v1[44] = "Aug";
  v1[45] = "Sep";
  v1[46] = "Oct";
  v1[47] = "Nov";
  result = "Dec";
  v1[48] = "Dec";
  return result;
}

