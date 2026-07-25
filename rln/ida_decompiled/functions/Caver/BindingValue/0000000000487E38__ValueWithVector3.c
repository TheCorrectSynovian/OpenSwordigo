/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000487E38
 * Mangled: _ZN5Caver12BindingValue16ValueWithVector3ERKNS_7Vector3E
 * Demangled: Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
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
 * Referenced strings: 46
 *   insn=0x0000000000487E48 string=0x0000000000487E4C "V"
 *   insn=0x0000000000487E64 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000487E84 string=0x0000000000487E88 "\t"
 *   insn=0x0000000000487E88 string=0x0000000000487E8C ")"
 *   insn=0x0000000000487E98 string=0x0000000000487E9C "(A"
 *   insn=0x0000000000487EA0 string=0x0000000000487EA4 ""
 *   insn=0x0000000000487EC0 string=0x0000000000487F18 ")"
 *   insn=0x0000000000487EC4 string=0x0000000000487EC8 "*"
 *   insn=0x0000000000487EC8 string=0x0000000000487ECC "h"
 *   insn=0x0000000000487ECC string=0x0000000000487ED0 "j"
 *   insn=0x0000000000487ED0 string=0x0000000000487ED4 "("
 *   insn=0x0000000000487EDC string=0x0000000000487EE0 "A"
 *   insn=0x0000000000487EE4 string=0x0000000000487EE8 "\t@"
 *   insn=0x0000000000487EF4 string=0x0000000000487EF8 ""
 *   insn=0x0000000000487EFC string=0x0000000000487F00 "A"
 *   insn=0x0000000000487F04 string=0x0000000000487F08 "@"
 *   insn=0x0000000000487F1C string=0x0000000000487F20 "i"
 *   insn=0x0000000000487F20 string=0x0000000000487F24 "h"
 *   insn=0x0000000000487F28 string=0x0000000000487F2C "3"
 *   insn=0x0000000000487F2C string=0x0000000000487F30 "h"
 *   insn=0x0000000000487F30 string=0x0000000000487F34 ""
 *   insn=0x0000000000487F34 string=0x0000000000487F38 "h"
 *   insn=0x0000000000487F3C string=0x0000000000487F40 "h"
 *   insn=0x0000000000487F44 string=0x0000000000487F48 "\t@"
 *   insn=0x0000000000487F4C string=0x0000000000487F50 "h\n@"
 *   insn=0x0000000000487F50 string=0x0000000000487F54 ""
 *   insn=0x0000000000487F54 string=0x0000000000487F58 "h\n"
 *   insn=0x0000000000487F5C string=0x0000000000487F60 "h"
 *   insn=0x0000000000487F64 string=0x0000000000487F68 "@"
 *   insn=0x0000000000487F94 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000487F9C string=0x0000000000487FA0 "4"
 *   insn=0x0000000000487FA4 string=0x0000000000487FA8 ""
 *   insn=0x0000000000487FB4 string=0x0000000000487FB8 "\t@"
 *   insn=0x0000000000487FC4 string=0x0000000000487FC8 ""
 *   insn=0x0000000000487FD4 string=0x0000000000487FD8 "@"
 *   insn=0x0000000000487FE4 string=0x0000000000487FE8 "7"
 *   insn=0x0000000000487FEC string=0x0000000000487FF0 "|"
 *   insn=0x0000000000487FF0 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000487FF8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000488000 string=0x0000000000488004 "c"
 *   insn=0x0000000000488004 string=0x00000000001FD590 "0'"
 *   insn=0x000000000048800C string=0x0000000000488010 "\t"
 *   insn=0x0000000000488010 string=0x0000000000488014 "*"
 *   insn=0x0000000000488014 string=0x0000000000488018 "\n"
 *   insn=0x0000000000488018 string=0x000000000048801C ")\t@"
 *   insn=0x000000000048801C string=0x0000000000488020 "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ValueWithVector3(Caver::BindingValue *this@<X0>, __int64 a2@<X8>)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = operator new(0xCu);
  *(_QWORD *)v5 = *(_QWORD *)this;
  *(_DWORD *)(v5 + 8) = *((_DWORD *)this + 2);
  v6 = operator new(0x20u);
  *(_QWORD *)(v6 + 24) = v5;
  *(int64x2_t *)(v6 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v6 = &off_6D5518;
  v11 = (_QWORD *)v6;
  boost::detail::sp_enable_shared_from_this();
  if ( v11 )
  {
    v7 = v11[1];
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(a2 + 16) = v11;
    *(_DWORD *)a2 = 9;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    v11[1] = v7 + 1;
    if ( v7 == -1 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v8 = v11[2] - 1LL;
      v11[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_DWORD *)a2 = 9;
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(a2 + 16) = 0;
  }
  if ( v11 )
  {
    v9 = v11[1] - 1LL;
    v11[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v10 = v11[2] - 1LL;
      v11[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
}

