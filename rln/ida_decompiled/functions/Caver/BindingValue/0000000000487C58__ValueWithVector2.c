/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000487C58
 * Mangled: _ZN5Caver12BindingValue16ValueWithVector2ERKNS_7Vector2E
 * Demangled: Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F6210  Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x0000000000487C68 string=0x0000000000487C6C "V"
 *   insn=0x0000000000487C80 string=0x0000000000487C84 "W"
 *   insn=0x0000000000487C84 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000487C98 string=0x0000000000487C9C "Q"
 *   insn=0x0000000000487CA0 string=0x0000000000487CA4 ")"
 *   insn=0x0000000000487CB0 string=0x0000000000487CB4 "(A"
 *   insn=0x0000000000487CB8 string=0x0000000000487CBC ""
 *   insn=0x0000000000487CCC string=0x0000000000487CD0 " "
 *   insn=0x0000000000487CE0 string=0x0000000000487CE4 "h"
 *   insn=0x0000000000487CE4 string=0x0000000000487CE8 "j"
 *   insn=0x0000000000487CE8 string=0x0000000000487CEC "("
 *   insn=0x0000000000487CF4 string=0x0000000000487CF8 "A"
 *   insn=0x0000000000487CFC string=0x0000000000487D00 "\t@"
 *   insn=0x0000000000487D0C string=0x0000000000487D10 ""
 *   insn=0x0000000000487D14 string=0x0000000000487D18 "A"
 *   insn=0x0000000000487D1C string=0x0000000000487D20 "@"
 *   insn=0x0000000000487D34 string=0x0000000000487D38 "i"
 *   insn=0x0000000000487D38 string=0x0000000000487D3C "h"
 *   insn=0x0000000000487D40 string=0x0000000000487D44 "3"
 *   insn=0x0000000000487D44 string=0x0000000000487D48 "h"
 *   insn=0x0000000000487D48 string=0x0000000000487D4C ""
 *   insn=0x0000000000487D4C string=0x0000000000487D50 "h"
 *   insn=0x0000000000487D54 string=0x0000000000487D58 "h"
 *   insn=0x0000000000487D5C string=0x0000000000487D60 "\t@"
 *   insn=0x0000000000487D64 string=0x0000000000487D68 "h\n@"
 *   insn=0x0000000000487D68 string=0x0000000000487D6C ""
 *   insn=0x0000000000487D6C string=0x0000000000487D70 "h\n"
 *   insn=0x0000000000487D74 string=0x0000000000487D78 "h"
 *   insn=0x0000000000487D7C string=0x0000000000487D80 "@"
 *   insn=0x0000000000487D94 string=0x0000000000487DAC "I"
 *   insn=0x0000000000487DAC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000487DB4 string=0x0000000000487DB8 "4"
 *   insn=0x0000000000487DBC string=0x0000000000487DC0 ""
 *   insn=0x0000000000487DCC string=0x0000000000487DD0 "\t@"
 *   insn=0x0000000000487DDC string=0x0000000000487DE0 ""
 *   insn=0x0000000000487DEC string=0x0000000000487DF0 "@"
 *   insn=0x0000000000487E00 string=0x0000000000487E04 "R"
 *   insn=0x0000000000487E08 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000487E0C string=0x0000000000487E10 "("
 *   insn=0x0000000000487E10 string=0x0000000000487E14 "W"
 *   insn=0x0000000000487E10 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000487E1C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000487E24 string=0x0000000000487E28 "\t"
 *   insn=0x0000000000487E28 string=0x0000000000487E2C ")"
 *   insn=0x0000000000487E2C string=0x0000000000487E30 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ValueWithVector2(Caver::BindingValue *this@<X0>, __int64 a2@<X8>)
{
  __int64 v5; // x0
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // [xsp+8h] [xbp-38h]
  _QWORD *v11; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v10 = (_QWORD *)operator new(8u);
  *v10 = *(_QWORD *)this;
  v5 = operator new(0x20u);
  *(_QWORD *)(v5 + 24) = v10;
  *(int64x2_t *)(v5 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v5 = &off_6D00E8;
  v11 = (_QWORD *)v5;
  boost::detail::sp_enable_shared_from_this();
  if ( v11 )
  {
    v6 = v11[1];
    *(_QWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = v11;
    *(_DWORD *)a2 = 8;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    v11[1] = v6 + 1;
    if ( v6 == -1 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v7 = v11[2] - 1LL;
      v11[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_DWORD *)a2 = 8;
    *(_QWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = 0;
  }
  if ( v11 )
  {
    v8 = v11[1] - 1LL;
    v11[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v9 = v11[2] - 1LL;
      v11[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
}

