/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000487A78
 * Mangled: _ZN5Caver12BindingValue19ValueWithFloatColorERKNS_10FloatColorE
 * Demangled: Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *
 * Callers: 1
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
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
 * Referenced strings: 40
 *   insn=0x0000000000487A88 string=0x0000000000487A8C "V"
 *   insn=0x0000000000487AA4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000487AC0 string=0x0000000000487AC4 ")"
 *   insn=0x0000000000487AD0 string=0x0000000000487AD4 "(A"
 *   insn=0x0000000000487AD8 string=0x0000000000487ADC ""
 *   insn=0x0000000000487B00 string=0x0000000000487B04 "h"
 *   insn=0x0000000000487B04 string=0x0000000000487B08 "j"
 *   insn=0x0000000000487B08 string=0x0000000000487B0C "("
 *   insn=0x0000000000487B14 string=0x0000000000487B18 "A"
 *   insn=0x0000000000487B1C string=0x0000000000487B20 "\t@"
 *   insn=0x0000000000487B2C string=0x0000000000487B30 ""
 *   insn=0x0000000000487B34 string=0x0000000000487B38 "A"
 *   insn=0x0000000000487B3C string=0x0000000000487B40 "@"
 *   insn=0x0000000000487B54 string=0x0000000000487B58 "i"
 *   insn=0x0000000000487B58 string=0x0000000000487B5C "h"
 *   insn=0x0000000000487B60 string=0x0000000000487B64 "3"
 *   insn=0x0000000000487B64 string=0x0000000000487B68 "h"
 *   insn=0x0000000000487B68 string=0x0000000000487B6C ""
 *   insn=0x0000000000487B6C string=0x0000000000487B70 "h"
 *   insn=0x0000000000487B74 string=0x0000000000487B78 "h"
 *   insn=0x0000000000487B7C string=0x0000000000487B80 "\t@"
 *   insn=0x0000000000487B84 string=0x0000000000487B88 "h\n@"
 *   insn=0x0000000000487B88 string=0x0000000000487B8C ""
 *   insn=0x0000000000487B8C string=0x0000000000487B90 "h\n"
 *   insn=0x0000000000487B94 string=0x0000000000487B98 "h"
 *   insn=0x0000000000487B9C string=0x0000000000487BA0 "@"
 *   insn=0x0000000000487BCC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000487BD4 string=0x0000000000487BD8 "4"
 *   insn=0x0000000000487BDC string=0x0000000000487BE0 ""
 *   insn=0x0000000000487BEC string=0x0000000000487BF0 "\t@"
 *   insn=0x0000000000487BFC string=0x0000000000487C00 ""
 *   insn=0x0000000000487C0C string=0x0000000000487C10 "@"
 *   insn=0x0000000000487C1C string=0x0000000000487C20 ")"
 *   insn=0x0000000000487C24 string=0x0000000000487C28 "n"
 *   insn=0x0000000000487C28 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000487C30 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000487C38 string=0x0000000000487C3C "U"
 *   insn=0x0000000000487C3C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000487C44 string=0x0000000000487C48 "\t"
 *   insn=0x0000000000487C48 string=0x0000000000487C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ValueWithFloatColor(Caver::BindingValue *this@<X0>, __int64 a2@<X8>)
{
  __int64 v5; // x0
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  _OWORD *v10; // [xsp+8h] [xbp-38h]
  _QWORD *v11; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v10 = (_OWORD *)operator new(0x10u);
  *v10 = *(_OWORD *)this;
  v5 = operator new(0x20u);
  *(_QWORD *)(v5 + 24) = v10;
  *(int64x2_t *)(v5 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v5 = &off_6D54C8;
  v11 = (_QWORD *)v5;
  boost::detail::sp_enable_shared_from_this();
  if ( v11 )
  {
    v6 = v11[1];
    *(_QWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = v11;
    *(_DWORD *)a2 = 7;
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
    *(_DWORD *)a2 = 7;
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

