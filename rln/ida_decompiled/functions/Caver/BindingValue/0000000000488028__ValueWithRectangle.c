/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000488028
 * Mangled: _ZN5Caver12BindingValue18ValueWithRectangleERKNS_9RectangleE
 * Demangled: Caver::BindingValue::ValueWithRectangle(Caver::Rectangle const&)
 *
 * Callers: 0
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
 *   insn=0x0000000000488038 string=0x000000000048803C "V"
 *   insn=0x0000000000488050 string=0x0000000000488054 "c"
 *   insn=0x0000000000488054 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000488068 string=0x000000000048806C "]"
 *   insn=0x0000000000488070 string=0x0000000000488074 ")"
 *   insn=0x0000000000488080 string=0x0000000000488084 "(A"
 *   insn=0x0000000000488088 string=0x000000000048808C ""
 *   insn=0x000000000048809C string=0x00000000004880A0 ","
 *   insn=0x00000000004880A8 string=0x0000000000488100 "I"
 *   insn=0x00000000004880AC string=0x00000000004880B0 "J"
 *   insn=0x00000000004880B0 string=0x00000000004880B4 "h"
 *   insn=0x00000000004880B4 string=0x00000000004880B8 "j"
 *   insn=0x00000000004880B8 string=0x00000000004880BC "("
 *   insn=0x00000000004880C4 string=0x00000000004880C8 "A"
 *   insn=0x00000000004880CC string=0x00000000004880D0 "\t@"
 *   insn=0x00000000004880DC string=0x00000000004880E0 ""
 *   insn=0x00000000004880E4 string=0x00000000004880E8 "A"
 *   insn=0x00000000004880EC string=0x00000000004880F0 "@"
 *   insn=0x0000000000488104 string=0x0000000000488108 "i"
 *   insn=0x0000000000488108 string=0x000000000048810C "h"
 *   insn=0x0000000000488110 string=0x0000000000488114 "3"
 *   insn=0x0000000000488114 string=0x0000000000488118 "h"
 *   insn=0x0000000000488118 string=0x000000000048811C ""
 *   insn=0x000000000048811C string=0x0000000000488120 "h"
 *   insn=0x0000000000488124 string=0x0000000000488128 "h"
 *   insn=0x000000000048812C string=0x0000000000488130 "\t@"
 *   insn=0x0000000000488134 string=0x0000000000488138 "h\n@"
 *   insn=0x0000000000488138 string=0x000000000048813C ""
 *   insn=0x000000000048813C string=0x0000000000488140 "h\n"
 *   insn=0x0000000000488144 string=0x0000000000488148 "h"
 *   insn=0x000000000048814C string=0x0000000000488150 "@"
 *   insn=0x0000000000488164 string=0x000000000048817C "U"
 *   insn=0x000000000048817C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000488184 string=0x0000000000488188 "4"
 *   insn=0x000000000048818C string=0x0000000000488190 ""
 *   insn=0x000000000048819C string=0x00000000004881A0 "\t@"
 *   insn=0x00000000004881AC string=0x00000000004881B0 ""
 *   insn=0x00000000004881BC string=0x00000000004881C0 "@"
 *   insn=0x00000000004881D0 string=0x00000000004881D4 "^"
 *   insn=0x00000000004881D8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004881DC string=0x00000000004881E0 "4"
 *   insn=0x00000000004881E0 string=0x00000000004881E4 "c"
 *   insn=0x00000000004881E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004881EC string=0x00000000001FD590 "0'"
 *   insn=0x00000000004881F4 string=0x00000000004881F8 "\t"
 *   insn=0x00000000004881F8 string=0x00000000004881FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ValueWithRectangle(Caver::BindingValue *this@<X0>, __int64 a2@<X8>)
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
  *(_QWORD *)v5 = &off_6B9828;
  v11 = (_QWORD *)v5;
  boost::detail::sp_enable_shared_from_this();
  if ( v11 )
  {
    v6 = v11[1];
    *(_QWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = v11;
    *(_DWORD *)a2 = 10;
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
    *(_DWORD *)a2 = 10;
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

