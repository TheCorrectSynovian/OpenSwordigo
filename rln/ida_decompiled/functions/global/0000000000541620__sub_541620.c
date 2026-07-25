/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000541620
 * Mangled: sub_541620
 * Demangled: sub_541620
 *
 * Callers: 7
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x00000000004D56A4  sub_4D56A4
 *   0x00000000004D5CF4  sub_4D5CF4
 *   0x000000000054185C  sub_54185C
 *   0x0000000000541860  sub_541860
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
 * Referenced strings: 42
 *   insn=0x000000000054162C string=0x0000000000541630 "@`"
 *   insn=0x0000000000541664 string=0x0000000000541668 "u~@"
 *   insn=0x0000000000541668 string=0x000000000054166C "U\n"
 *   insn=0x000000000054166C string=0x0000000000541670 "vv@"
 *   insn=0x0000000000541670 string=0x0000000000541674 "`"
 *   insn=0x000000000054167C string=0x0000000000541680 "@"
 *   insn=0x0000000000541680 string=0x0000000000541684 "xz@"
 *   insn=0x0000000000541680 string=0x00000000005416A8 "d"
 *   insn=0x0000000000541694 string=0x0000000000541698 " "
 *   insn=0x0000000000541698 string=0x000000000054169C "d"
 *   insn=0x000000000054169C string=0x00000000005416A0 "`"
 *   insn=0x00000000005416B8 string=0x00000000005416BC """
 *   insn=0x00000000005416C8 string=0x00000000005416CC "!"
 *   insn=0x00000000005416E0 string=0x00000000005416E4 "! @"
 *   insn=0x00000000005416E4 string=0x00000000005416E8 "!"
 *   insn=0x00000000005416E8 string=0x00000000005416EC "J}"
 *   insn=0x00000000005416F0 string=0x00000000005416F4 "`"
 *   insn=0x00000000005416F8 string=0x00000000005416FC "s"
 *   insn=0x00000000005416FC string=0x0000000000541700 "`"
 *   insn=0x0000000000541700 string=0x0000000000541704 "`"
 *   insn=0x0000000000541708 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000541710 string=0x0000000000541714 "`v@"
 *   insn=0x000000000054171C string=0x0000000000541720 "!"
 *   insn=0x0000000000541720 string=0x0000000000541724 " "
 *   insn=0x0000000000541728 string=0x000000000054172C " "
 *   insn=0x0000000000541750 string=0x0000000000541754 " "
 *   insn=0x0000000000541758 string=0x000000000054175C "!"
 *   insn=0x0000000000541760 string=0x0000000000541764 "! @"
 *   insn=0x0000000000541764 string=0x0000000000541768 "!"
 *   insn=0x0000000000541768 string=0x000000000054176C "*}"
 *   insn=0x00000000005417A0 string=0x00000000005417A4 "B"
 *   insn=0x00000000005417A4 string=0x00000000005417A8 "@"
 *   insn=0x00000000005417BC string=0x0000000000541818 "r"
 *   insn=0x00000000005417C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005417F0 string=0x00000000005417F4 "A"
 *   insn=0x00000000005417F8 string=0x00000000005417FC "2"
 *   insn=0x0000000000541800 string=0x0000000000541804 "c"
 *   insn=0x0000000000541804 string=0x00000000001FD590 "0'"
 *   insn=0x000000000054182C string=0x0000000000541830 "!"
 *   insn=0x0000000000541834 string=0x0000000000541838 "b"
 *   insn=0x0000000000541838 string=0x000000000054183C "U"
 *   insn=0x0000000000541848 string=0x000000000054184C "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_541620(_QWORD *a1, double a2)
{
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, double))(*(_QWORD *)v12 + 56LL))(
      v12,
      v13,
      v13 == 0,
      v11,
      v15,
      a2);
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

