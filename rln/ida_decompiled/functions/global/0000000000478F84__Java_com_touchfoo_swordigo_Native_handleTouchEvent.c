/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000478F84
 * Mangled: Java_com_touchfoo_swordigo_Native_handleTouchEvent
 * Demangled: Java_com_touchfoo_swordigo_Native_handleTouchEvent
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 28
 *   insn=0x0000000000478F90 string=0x0000000000478F94 "S"
 *   insn=0x0000000000478F94 string=0x0000000000478F98 "h"
 *   insn=0x0000000000478FA4 string=0x0000000000478FA8 "@"
 *   insn=0x0000000000478FA8 string=0x0000000000479050 "h"
 *   insn=0x0000000000478FB4 string=0x0000000000478FB8 "%"
 *   insn=0x0000000000478FB8 string=0x0000000000478FBC "G"
 *   insn=0x0000000000478FBC string=0x0000000000478FC0 "h|@"
 *   insn=0x0000000000478FC4 string=0x0000000000478FC8 "H"
 *   insn=0x0000000000478FC8 string=0x0000000000478FCC "!8%"
 *   insn=0x0000000000478FCC string=0x0000000000478FD0 "B8&"
 *   insn=0x0000000000478FD0 string=0x0000000000478FD4 "c8%"
 *   insn=0x0000000000478FDC string=0x0000000000478FE0 "!"
 *   insn=0x0000000000478FE0 string=0x0000000000478FE4 "B"
 *   insn=0x0000000000478FE4 string=0x0000000000478FE8 "c"
 *   insn=0x0000000000479000 string=0x0000000000479004 "h"
 *   insn=0x0000000000479008 string=0x0000000000479010 "(y"
 *   insn=0x0000000000479008 string=0x0000000000595FE4 "80"
 *   insn=0x0000000000479010 string=0x0000000000479014 ""
 *   insn=0x0000000000479018 string=0x000000000047901C ""
 *   insn=0x0000000000479018 string=0x0000000000479028 ""
 *   insn=0x0000000000479018 string=0x0000000000479034 ""
 *   insn=0x0000000000479018 string=0x0000000000479040 ""
 *   insn=0x000000000047901C string=0x0000000000479020 ""
 *   insn=0x0000000000479020 string=0x0000000000479024 "\t"
 *   insn=0x0000000000479028 string=0x000000000047902C "@"
 *   insn=0x0000000000479034 string=0x0000000000479038 ""
 *   insn=0x0000000000479040 string=0x0000000000479044 "\t@"
 *   insn=0x0000000000479070 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_handleTouchEvent(
        double a1,
        float a2,
        float a3,
        float a4,
        float a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 result; // x0
  __int64 v12; // [xsp+0h] [xbp-40h] BYREF
  float v13; // [xsp+8h] [xbp-38h]
  float v14; // [xsp+Ch] [xbp-34h]
  float v15; // [xsp+10h] [xbp-30h]
  float v16; // [xsp+14h] [xbp-2Ch]
  double v17; // [xsp+18h] [xbp-28h]
  int v18; // [xsp+20h] [xbp-20h]
  int v19; // [xsp+24h] [xbp-1Ch]
  __int64 v20; // [xsp+28h] [xbp-18h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = qword_6E9C20;
  if ( qword_6E9C20 )
  {
    v12 = (int)a9;
    v19 = 0;
    v13 = (float)(a2 - *(float *)&qword_6E9C90) / *(float *)&dword_6E9CA8;
    v14 = (float)(a3 - *((float *)&qword_6E9C90 + 1)) / *(float *)&dword_6E9CA8;
    v15 = (float)(a4 - *(float *)&qword_6E9C90) / *(float *)&dword_6E9CA8;
    v16 = (float)(a5 - *((float *)&qword_6E9C90 + 1)) / *(float *)&dword_6E9CA8;
    v17 = a1;
    v18 = a10;
    switch ( (int)a8 )
    {
      case 1:
        result = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64, __int64, __int64, __int64))qword_6E9C20)(
                   qword_6E9C20,
                   &v12,
                   a8,
                   a9,
                   a10,
                   a11);
        break;
      case 2:
        result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64))(*(_QWORD *)qword_6E9C20 + 16LL))(
                   qword_6E9C20,
                   &v12,
                   a8,
                   a9,
                   a10,
                   a11);
        break;
      case 3:
        result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64))(*(_QWORD *)qword_6E9C20 + 24LL))(
                   qword_6E9C20,
                   &v12,
                   a8,
                   a9,
                   a10,
                   a11);
        break;
      case 4:
        result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64))(*(_QWORD *)qword_6E9C20 + 8LL))(
                   qword_6E9C20,
                   &v12,
                   a8,
                   a9,
                   a10,
                   a11);
        break;
      default:
        return result;
    }
  }
  return result;
}

