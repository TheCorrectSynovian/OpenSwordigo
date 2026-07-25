/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BC88
 * Mangled: _ZN5Caver12BindingValue12ValueWithIntEi
 * Demangled: Caver::BindingValue::ValueWithInt(int)
 *
 * Callers: 1
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
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
 * Referenced strings: 41
 *   insn=0x000000000021BC98 string=0x000000000021BC9C "V"
 *   insn=0x000000000021BCB0 string=0x000000000021BCB4 "Kf"
 *   insn=0x000000000021BCB4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021BCC4 string=0x000000000021BCC8 "Ff"
 *   insn=0x000000000021BCC8 string=0x000000000021BCCC "i&"
 *   insn=0x000000000021BCCC string=0x000000000021BCD0 ")"
 *   insn=0x000000000021BCDC string=0x000000000021BCE0 "(A"
 *   insn=0x000000000021BCE4 string=0x000000000021BCE8 ""
 *   insn=0x000000000021BD0C string=0x000000000021BD10 "h"
 *   insn=0x000000000021BD10 string=0x000000000021BD14 "j"
 *   insn=0x000000000021BD14 string=0x000000000021BD18 "("
 *   insn=0x000000000021BD20 string=0x000000000021BD24 "A"
 *   insn=0x000000000021BD28 string=0x000000000021BD2C "\t@"
 *   insn=0x000000000021BD38 string=0x000000000021BD3C ""
 *   insn=0x000000000021BD40 string=0x000000000021BD44 "A"
 *   insn=0x000000000021BD48 string=0x000000000021BD4C "@"
 *   insn=0x000000000021BD60 string=0x000000000021BD64 "i"
 *   insn=0x000000000021BD64 string=0x000000000021BD68 "h"
 *   insn=0x000000000021BD6C string=0x000000000021BD70 "3"
 *   insn=0x000000000021BD70 string=0x000000000021BD74 "h"
 *   insn=0x000000000021BD74 string=0x000000000021BD78 ""
 *   insn=0x000000000021BD78 string=0x000000000021BD7C "h"
 *   insn=0x000000000021BD80 string=0x000000000021BD84 "h"
 *   insn=0x000000000021BD88 string=0x000000000021BD8C "\t@"
 *   insn=0x000000000021BD90 string=0x000000000021BD94 "h\n@"
 *   insn=0x000000000021BD94 string=0x000000000021BD98 ""
 *   insn=0x000000000021BD98 string=0x000000000021BD9C "h\n"
 *   insn=0x000000000021BDA0 string=0x000000000021BDA4 "h"
 *   insn=0x000000000021BDA8 string=0x000000000021BDAC "@"
 *   insn=0x000000000021BDC0 string=0x000000000021BDD8 ">i"
 *   insn=0x000000000021BDD8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021BDE0 string=0x000000000021BDE4 "4"
 *   insn=0x000000000021BDE8 string=0x000000000021BDEC ""
 *   insn=0x000000000021BDF8 string=0x000000000021BDFC "\t@"
 *   insn=0x000000000021BE08 string=0x000000000021BE0C ""
 *   insn=0x000000000021BE18 string=0x000000000021BE1C "@"
 *   insn=0x000000000021BE2C string=0x000000000021BE30 "G"
 *   insn=0x000000000021BE34 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000021BE3C string=0x000000000021BE40 "L"
 *   insn=0x000000000021BE3C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021BE48 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ValueWithInt(Caver::BindingValue *this@<X0>, __int64 a2@<X8>)
{
  int v3; // w21
  _DWORD *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // [xsp+10h] [xbp-30h]

  v3 = (int)this;
  _ReadStatusReg(TPIDR_EL0);
  v4 = (_DWORD *)operator new(4u);
  *v4 = v3;
  v5 = operator new(0x20u);
  *(_QWORD *)(v5 + 24) = v4;
  *(int64x2_t *)(v5 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v5 = &off_6B9738;
  v10 = (_QWORD *)v5;
  boost::detail::sp_enable_shared_from_this();
  if ( v10 )
  {
    v6 = v10[1];
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = v10;
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    v10[1] = v6 + 1;
    if ( v6 == -1 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v7 = v10[2] - 1LL;
      v10[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = 0;
  }
  if ( v10 )
  {
    v8 = v10[1] - 1LL;
    v10[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v9 = v10[2] - 1LL;
      v10[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
}

