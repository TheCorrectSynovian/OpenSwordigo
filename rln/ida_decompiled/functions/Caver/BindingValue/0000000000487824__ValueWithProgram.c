/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000487824
 * Mangled: _ZN5Caver12BindingValue16ValueWithProgramERKNS_7ProgramE
 * Demangled: Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *
 * Callers: 1
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *
 * Callees: 9
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000487A0C  Caver::BindingValue::ProgramValue(void)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x0000000000487834 string=0x0000000000487838 "V"
 *   insn=0x000000000048784C string=0x0000000000487850 "d"
 *   insn=0x0000000000487850 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000487858 string=0x000000000048785C "3"
 *   insn=0x0000000000487870 string=0x0000000000487874 "\t"
 *   insn=0x0000000000487874 string=0x0000000000487878 ")"
 *   insn=0x0000000000487878 string=0x000000000048787C "\t"
 *   insn=0x0000000000487890 string=0x0000000000487894 "\t"
 *   insn=0x0000000000487894 string=0x0000000000487898 ")"
 *   insn=0x0000000000487898 string=0x000000000048789C "\t"
 *   insn=0x00000000004878B0 string=0x00000000001F38E0 "P'"
 *   insn=0x00000000004878BC string=0x00000000004878C0 "$"
 *   insn=0x00000000004878D0 string=0x00000000004878D4 "h"
 *   insn=0x00000000004878D4 string=0x00000000004878D8 "j"
 *   insn=0x00000000004878D8 string=0x00000000004878DC "("
 *   insn=0x00000000004878E4 string=0x00000000004878E8 "A"
 *   insn=0x00000000004878EC string=0x00000000004878F0 "\t@"
 *   insn=0x00000000004878FC string=0x0000000000487900 ""
 *   insn=0x0000000000487904 string=0x0000000000487908 "A"
 *   insn=0x000000000048790C string=0x0000000000487910 "@"
 *   insn=0x0000000000487924 string=0x0000000000487928 "i"
 *   insn=0x0000000000487928 string=0x000000000048792C "h"
 *   insn=0x0000000000487930 string=0x0000000000487934 "3"
 *   insn=0x0000000000487934 string=0x0000000000487938 "h"
 *   insn=0x0000000000487938 string=0x000000000048793C ""
 *   insn=0x000000000048793C string=0x0000000000487940 "h"
 *   insn=0x0000000000487944 string=0x0000000000487948 "h"
 *   insn=0x000000000048794C string=0x0000000000487950 "\t@"
 *   insn=0x0000000000487954 string=0x0000000000487958 "h\n@"
 *   insn=0x0000000000487958 string=0x000000000048795C ""
 *   insn=0x000000000048795C string=0x0000000000487960 "h\n"
 *   insn=0x0000000000487964 string=0x0000000000487968 "h"
 *   insn=0x000000000048796C string=0x0000000000487970 "@"
 *   insn=0x0000000000487984 string=0x000000000048799C "M"
 *   insn=0x000000000048799C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004879A4 string=0x00000000004879A8 "4"
 *   insn=0x00000000004879AC string=0x00000000004879B0 ""
 *   insn=0x00000000004879BC string=0x00000000004879C0 "\t@"
 *   insn=0x00000000004879CC string=0x00000000004879D0 ""
 *   insn=0x00000000004879DC string=0x00000000004879E0 "@"
 *   insn=0x00000000004879F0 string=0x00000000004879F4 "V"
 *   insn=0x00000000004879FC string=0x0000000000487A00 ","
 *   insn=0x0000000000487A00 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ValueWithProgram(Caver::BindingValue *this@<X0>, __int64 a2@<X8>)
{
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = (_QWORD *)operator new(0x28u);
  sub_56A528(v5, this);
  v5[1] = *((_QWORD *)this + 1);
  v6 = *((_QWORD *)this + 2);
  v5[2] = v6;
  if ( v6 )
    ++*(_QWORD *)(v6 + 8);
  v5[3] = *((_QWORD *)this + 3);
  v7 = *((_QWORD *)this + 4);
  v5[4] = v7;
  if ( v7 )
    ++*(_QWORD *)(v7 + 8);
  boost::detail::shared_count::shared_count<Caver::Program>();
  boost::detail::sp_enable_shared_from_this();
  if ( v12 )
  {
    v8 = v12[1];
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(a2 + 16) = v12;
    *(_DWORD *)a2 = 6;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    v12[1] = v8 + 1;
    if ( v8 == -1 )
    {
      (*(void (__fastcall **)())(*v12 + 16LL))();
      v9 = v12[2] - 1LL;
      v12[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)())(*v12 + 24LL))();
    }
  }
  else
  {
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_DWORD *)a2 = 6;
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(a2 + 16) = 0;
  }
  if ( v12 )
  {
    v10 = v12[1] - 1LL;
    v12[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)())(*v12 + 16LL))();
      v11 = v12[2] - 1LL;
      v12[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)())(*v12 + 24LL))();
    }
  }
}

