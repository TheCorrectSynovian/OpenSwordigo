/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052EE7C
 * Mangled: sub_52EE7C
 * Demangled: sub_52EE7C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x0000000000203230  .strlen
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052D354  sub_52D354
 *   0x000000000052EE14  sub_52EE14
 *   0x000000000054BD8C  sub_54BD8C
 *
 * Referenced strings: 10
 *   insn=0x000000000052EE84 string=0x000000000052EE88 "x@"
 *   insn=0x000000000052EEAC string=0x000000000052EEB0 ")"
 *   insn=0x000000000052EED0 string=0x000000000052EED4 "4"
 *   insn=0x000000000052EF08 string=0x000000000052EF0C "a"
 *   insn=0x000000000052EF10 string=0x000000000052EF14 "!"
 *   insn=0x000000000052EF24 string=0x000000000052EF28 "c0@"
 *   insn=0x000000000052EF28 string=0x000000000052EF2C "`"
 *   insn=0x000000000052EF48 string=0x000000000052EF4C "!"
 *   insn=0x000000000052EF74 string=0x000000000052EF78 "B"
 *   insn=0x000000000052EF78 string=0x000000000052EF7C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52EE7C(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned __int8 a8)
{
  __int64 v8; // x24
  int v13; // w20
  _BYTE *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  void *v22; // x24
  char v23; // w0
  char v24; // w7
  int v25; // w0
  char v27; // [xsp+0h] [xbp+0h]
  _BYTE v28[8]; // [xsp+58h] [xbp+58h] BYREF
  char v29[128]; // [xsp+60h] [xbp+60h] BYREF

  v8 = a4 + 208;
  v13 = a8;
  v14 = sub_52D354(a4 + 208);
  v22 = sub_52EE14(v8);
  if ( v14[56] )
  {
    v23 = v14[94];
  }
  else
  {
    sub_51FEA0(v14, v15, v16, v17, v18, v19, v20, v21, v27);
    v23 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v14 + 48LL))(v14, 37);
  }
  v28[0] = v23;
  if ( v13 )
  {
    v28[3] = 0;
    v24 = v13;
  }
  else
  {
    v24 = a7;
    a7 = 0;
  }
  v28[1] = v24;
  v28[2] = a7;
  sub_54BD8C(v22, v29, 128, v28, a6);
  v25 = strlen(v29);
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, v29, v25);
  return a2;
}

