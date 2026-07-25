/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496990
 * Mangled: _ZN5Caver10GUIControl26SendActionsForControlEventENS0_5EventEj
 * Demangled: Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Callers: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002009B0  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202A00  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054A024  sub_54A024
 *   0x000000000054C640  sub_54C640
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000004969A4 string=0x00000000004969A8 "W"
 *   insn=0x00000000004969B4 string=0x00000000004969B8 "x"
 *   insn=0x00000000004969BC string=0x00000000004969C0 "t"
 *   insn=0x00000000004969D8 string=0x00000000004969DC "i"
 *   insn=0x0000000000496A08 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000496A24 string=0x0000000000496A28 ")!G"
 *   insn=0x0000000000496A34 string=0x0000000000496A38 "(A"
 *   insn=0x0000000000496A3C string=0x0000000000496A40 ""
 *   insn=0x0000000000496A64 string=0x0000000000496A68 ""
 *   insn=0x0000000000496A6C string=0x0000000000496A70 ""
 *   insn=0x0000000000496A94 string=0x0000000000496A98 "3"
 *   insn=0x0000000000496A98 string=0x0000000000496A9C "h"
 *   insn=0x0000000000496A9C string=0x0000000000496AA0 ""
 *   insn=0x0000000000496AA0 string=0x0000000000496AA4 "h"
 *   insn=0x0000000000496AA8 string=0x0000000000496AAC "h"
 *   insn=0x0000000000496AB0 string=0x0000000000496AB4 "\t@"
 *   insn=0x0000000000496AB8 string=0x0000000000496ABC "h\n@"
 *   insn=0x0000000000496ABC string=0x0000000000496AC0 ""
 *   insn=0x0000000000496AC0 string=0x0000000000496AC4 "h\n"
 *   insn=0x0000000000496AC8 string=0x0000000000496ACC "h"
 *   insn=0x0000000000496AD0 string=0x0000000000496AD4 "@"
 *   insn=0x0000000000496B04 string=0x0000000000496B08 ")"
 *   insn=0x0000000000496B08 string=0x0000000000496B0C "*!@"
 *   insn=0x0000000000496B0C string=0x0000000000496B10 "+a"
 *   insn=0x0000000000496B10 string=0x0000000000496B14 ",A"
 *   insn=0x0000000000496B14 string=0x0000000000496B18 "_"
 *   insn=0x0000000000496B18 string=0x0000000000496B1C "j"
 *   insn=0x0000000000496B20 string=0x0000000000496B24 "I"
 *   insn=0x0000000000496B24 string=0x0000000000496B28 ")"
 *   insn=0x0000000000496B2C string=0x0000000000496B30 "\t!@"
 *   insn=0x0000000000496B30 string=0x0000000000496B34 "\na"
 *   insn=0x0000000000496B34 string=0x0000000000496B38 "A"
 *   insn=0x0000000000496B38 string=0x0000000000496B3C "?"
 *   insn=0x0000000000496B3C string=0x0000000000496B40 "i"
 *   insn=0x0000000000496B44 string=0x0000000000496B48 "("
 *   insn=0x0000000000496B48 string=0x0000000000496B4C "("
 *   insn=0x0000000000496B64 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000496B6C string=0x0000000000496B70 "-"
 *   insn=0x0000000000496B84 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000496B8C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000496B94 string=0x0000000000496B98 "~"
 *   insn=0x0000000000496B98 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000496BA8 string=0x0000000000496BAC "4"
 *   insn=0x0000000000496BB0 string=0x0000000000496BB4 ""
 *   insn=0x0000000000496BC0 string=0x0000000000496BC4 "\t@"
 *   insn=0x0000000000496BD0 string=0x0000000000496BD4 ""
 *   insn=0x0000000000496BE0 string=0x0000000000496BE4 "@"
 *   insn=0x0000000000496BF0 string=0x0000000000496BF4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIControl::SendActionsForControlEvent(__int64 result, int a2, int a3)
{
  __int64 v3; // x19
  __int64 v5; // x24
  __int64 v6; // x20
  int v7; // w8
  __int64 v8; // x9
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  int v15; // w10
  bool v16; // cc
  __int64 *v17; // x10
  int v18; // w9
  bool v19; // cc
  __int64 *v20; // x9
  _QWORD *v21; // [xsp+10h] [xbp-50h]
  char v22[16]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v23; // [xsp+28h] [xbp-38h]

  v3 = result;
  v5 = result + 248;
  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(result + 256);
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 32);
        if ( v7 >= a2 )
          break;
        v6 = *(_QWORD *)(v6 + 24);
        if ( !v6 )
          goto LABEL_7;
      }
      v8 = *(_QWORD *)(v6 + 16);
      if ( v7 <= a2 )
        break;
      v5 = v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v8 )
        goto LABEL_7;
    }
    v14 = *(_QWORD *)(v6 + 24);
    if ( v8 )
    {
      do
      {
        v15 = *(_DWORD *)(v8 + 32);
        v16 = v15 < a2;
        if ( v15 >= a2 )
          v17 = (__int64 *)(v8 + 16);
        else
          v17 = (__int64 *)(v8 + 24);
        if ( !v16 )
          v6 = v8;
        v8 = *v17;
      }
      while ( *v17 );
    }
    if ( v14 )
    {
      do
      {
        v18 = *(_DWORD *)(v14 + 32);
        v19 = v18 <= a2;
        if ( v18 <= a2 )
          v20 = (__int64 *)(v14 + 24);
        else
          v20 = (__int64 *)(v14 + 16);
        if ( !v19 )
          v5 = v14;
        v14 = *v20;
      }
      while ( *v20 );
    }
  }
  else
  {
LABEL_7:
    v6 = v5;
  }
  if ( v6 != v5 )
  {
    v9 = operator new(0x10u);
    *(_QWORD *)v9 = 0;
    *(_DWORD *)(v9 + 8) = 0;
    v10 = operator new(0x20u);
    *(_QWORD *)(v10 + 24) = v9;
    *(int64x2_t *)(v10 + 8) = vdupq_n_s64(1u);
    *(_QWORD *)v10 = &off_6D5C08;
    v21 = (_QWORD *)v10;
    boost::detail::sp_enable_shared_from_this();
    *(_DWORD *)(v9 + 8) = a3;
    do
    {
      v11 = *(_QWORD *)(v6 + 48);
      if ( !v11 )
      {
        boost::bad_function_call::bad_function_call((boost::bad_function_call *)v22);
        boost::throw_exception<boost::bad_function_call>();
      }
      (*(void (__fastcall **)(__int64, __int64, __int64))((v11 & 0xFFFFFFFFFFFFFFFELL) + 8))(v6 + 56, v3, v9);
      result = sub_54C640(v6);
      v6 = result;
    }
    while ( result != v5 );
    if ( v21 )
    {
      v12 = v21[1] - 1LL;
      v21[1] = v12;
      if ( !v12 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
        v13 = v21[2] - 1LL;
        v21[2] = v13;
        if ( !v13 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
    }
  }
  return result;
}

