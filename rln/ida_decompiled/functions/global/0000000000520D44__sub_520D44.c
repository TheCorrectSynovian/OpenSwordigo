/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520D44
 * Mangled: sub_520D44
 * Demangled: sub_520D44
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000522C5C  sub_522C5C
 *   0x000000000052D354  sub_52D354
 *   0x000000000052E184  sub_52E184
 *   0x000000000052E1EC  sub_52E1EC
 *   0x000000000052F0C0  sub_52F0C0
 *   0x000000000052F270  sub_52F270
 *   0x000000000052F2DC  sub_52F2DC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000520D58 string=0x0000000000520D5C "8"
 *   insn=0x0000000000520D64 string=0x0000000000520D68 "!"
 *   insn=0x0000000000520D6C string=0x0000000000520D70 "a"
 *   insn=0x0000000000520D70 string=0x0000000000520D74 "tB"
 *   insn=0x0000000000520DA4 string=0x0000000000520DA8 "k1"
 *   insn=0x0000000000520DA8 string=0x0000000000520DAC "`z"
 *   insn=0x0000000000520DB0 string=0x0000000000520DB4 "/9"
 *   insn=0x0000000000520DC4 string=0x0000000000520DC8 "`~"
 *   insn=0x0000000000520DCC string=0x0000000000520DD0 "C9"
 *   insn=0x0000000000520DD4 string=0x0000000000520DD8 "@"
 *   insn=0x0000000000520DE0 string=0x0000000000520DE4 "`"
 *   insn=0x0000000000520DEC string=0x0000000000520DF0 "uv"
 *   insn=0x0000000000520E00 string=0x0000000000520E04 "`""
 *   insn=0x0000000000520E30 string=0x0000000000520E34 "*9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_520D44(__int64 a1, __int64 a2)
{
  _BOOL8 result; // x0

  sub_521E3C(a1);
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)a1 = off_6B6B30;
  *(_BYTE *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 225) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  sub_522C5C(a1);
  if ( (unsigned __int8)sub_52F0C0(a1 + 208) )
  {
    *(_QWORD *)(a1 + 240) = sub_52D354(a1 + 208);
    if ( (unsigned __int8)sub_52F270(a1 + 208) )
      goto LABEL_3;
LABEL_7:
    *(_QWORD *)(a1 + 248) = 0;
    if ( (unsigned __int8)sub_52F2DC(a1 + 208) )
      goto LABEL_4;
LABEL_8:
    *(_QWORD *)(a1 + 256) = 0;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 240) = 0;
  if ( !(unsigned __int8)sub_52F270(a1 + 208) )
    goto LABEL_7;
LABEL_3:
  *(_QWORD *)(a1 + 248) = sub_52E184(a1 + 208);
  if ( !(unsigned __int8)sub_52F2DC(a1 + 208) )
    goto LABEL_8;
LABEL_4:
  *(_QWORD *)(a1 + 256) = sub_52E1EC(a1 + 208);
LABEL_5:
  *(_BYTE *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = a2;
  result = a2 == 0;
  *(_BYTE *)(a1 + 225) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = result;
  return result;
}

