/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540F84
 * Mangled: sub_540F84
 * Demangled: sub_540F84
 *
 * Callers: 1
 *   0x00000000005411B4  sub_5411B4
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051FEA0  sub_51FEA0
 *   0x0000000000520C14  sub_520C14
 *   0x000000000053FC7C  sub_53FC7C
 *   0x000000000053FCF8  sub_53FCF8
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000540FA0 string=0x0000000000540FA4 "9"
 *   insn=0x0000000000540FAC string=0x0000000000540FB0 "3"
 *   insn=0x0000000000540FC4 string=0x0000000000540FC8 "u~@"
 *   insn=0x0000000000540FCC string=0x0000000000540FD0 "vv@"
 *   insn=0x0000000000540FCC string=0x000000000054110C "o"
 *   insn=0x0000000000540FD0 string=0x0000000000540FD4 "`"
 *   insn=0x0000000000540FDC string=0x0000000000540FE0 "@"
 *   insn=0x0000000000540FE0 string=0x0000000000540FE4 "xz@"
 *   insn=0x0000000000540FE0 string=0x0000000000541008 "d"
 *   insn=0x0000000000540FE8 string=0x0000000000541140 "b"
 *   insn=0x0000000000540FF4 string=0x0000000000540FF8 " "
 *   insn=0x0000000000540FF8 string=0x0000000000540FFC "d"
 *   insn=0x0000000000540FFC string=0x0000000000541000 "`"
 *   insn=0x0000000000541014 string=0x0000000000541018 "B"
 *   insn=0x0000000000541028 string=0x000000000054102C "!"
 *   insn=0x0000000000541040 string=0x0000000000541044 "! @"
 *   insn=0x0000000000541044 string=0x0000000000541048 "!"
 *   insn=0x0000000000541050 string=0x0000000000541054 "`"
 *   insn=0x0000000000541058 string=0x000000000054105C "s"
 *   insn=0x000000000054105C string=0x0000000000541060 "`"
 *   insn=0x0000000000541060 string=0x0000000000541064 "`"
 *   insn=0x0000000000541064 string=0x0000000000541068 "V"
 *   insn=0x0000000000541068 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000541070 string=0x0000000000541074 "`v@"
 *   insn=0x000000000054107C string=0x0000000000541080 "!"
 *   insn=0x0000000000541080 string=0x0000000000541084 " "
 *   insn=0x00000000005410AC string=0x00000000005410B0 " "
 *   insn=0x00000000005410B4 string=0x00000000005410B8 "!"
 *   insn=0x00000000005410BC string=0x00000000005410C0 "! @"
 *   insn=0x00000000005410C0 string=0x00000000005410C4 "!"
 *   insn=0x00000000005410E8 string=0x00000000005410EC "m{"
 *   insn=0x00000000005410F8 string=0x00000000005410FC "B"
 *   insn=0x00000000005410FC string=0x0000000000541100 "@"
 *   insn=0x0000000000541114 string=0x0000000000541118 "2"
 *   insn=0x0000000000541118 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000541158 string=0x000000000054115C ""
 *   insn=0x000000000054115C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000541184 string=0x0000000000541188 "!"
 *   insn=0x000000000054118C string=0x0000000000541190 "b"
 *   insn=0x0000000000541190 string=0x000000000054119C "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_540F84(_QWORD *a1, unsigned __int8 a2)
{
  unsigned int v3; // w25
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  char *v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  _BYTE *v14; // x24
  __int64 v15; // x4
  char v16; // w1
  char *v17; // x19
  __int64 v18; // x0
  char v20; // [xsp+0h] [xbp+0h]
  char v21[8]; // [xsp+60h] [xbp+60h] BYREF
  _QWORD *v22; // [xsp+68h] [xbp+68h]

  v3 = a2;
  sub_53FC7C((__int64)v21, a1);
  if ( v21[0] )
  {
    v11 = (char *)a1 + *(_QWORD *)(*a1 - 24LL);
    v12 = *((_QWORD *)v11 + 31);
    if ( !v12 )
      sub_5652C8(*a1);
    v13 = *((_QWORD *)v11 + 29);
    if ( v11[225] )
    {
      v15 = (unsigned __int8)v11[224];
    }
    else
    {
      v14 = (_BYTE *)*((_QWORD *)v11 + 30);
      if ( !v14 )
        sub_5652C8((unsigned __int8)v11[225]);
      if ( v14[56] )
      {
        v15 = (unsigned __int8)v14[89];
      }
      else
      {
        sub_51FEA0(*((_BYTE **)v11 + 30), v4, v5, v6, v7, v8, v9, v10, v20);
        v15 = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v14 + 48LL))(v14, 32);
      }
      v11[224] = v15;
      v11[225] = 1;
    }
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, _QWORD))(*(_QWORD *)v12 + 16LL))(
      v12,
      v13,
      v13 == 0,
      v11,
      v15,
      v3);
    if ( v16 )
      sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 1);
  }
  v17 = (char *)v22 + *(_QWORD *)(*v22 - 24LL);
  if ( (*((_DWORD *)v17 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v18 = *((_QWORD *)v17 + 29);
  if ( !v18 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18) != -1 )
    return a1;
  sub_520C14((__int64)v22 + *(_QWORD *)(*v22 - 24LL), *(_DWORD *)((char *)v22 + *(_QWORD *)(*v22 - 24LL) + 32) | 1);
  return a1;
}

