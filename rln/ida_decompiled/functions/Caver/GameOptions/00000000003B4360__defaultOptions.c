/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B4360
 * Mangled: _ZN5Caver11GameOptions14defaultOptionsEv
 * Demangled: Caver::GameOptions::defaultOptions(void)
 *
 * Callers: 1
 *   0x00000000001FD5A0  Caver::GameOptions::defaultOptions(void)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63B0  boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *
 * Referenced strings: 21
 *   insn=0x00000000003B4370 string=0x00000000003B4374 "U"
 *   insn=0x00000000003B4394 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B4398 string=0x00000000003B439C ""
 *   insn=0x00000000003B43A0 string=0x00000000003B43A4 ") "
 *   insn=0x00000000003B43B0 string=0x00000000003B43B4 "a"
 *   insn=0x00000000003B43B4 string=0x00000000003B43B8 " !"
 *   insn=0x00000000003B43E0 string=0x00000000001F63B0 "0'"
 *   insn=0x00000000003B43EC string=0x00000000003B43F0 "X9"
 *   insn=0x00000000003B43F4 string=0x00000000003B43FC "\tQ@"
 *   insn=0x00000000003B440C string=0x00000000003B4410 "\n%"
 *   insn=0x00000000003B4410 string=0x00000000003B4414 "4"
 *   insn=0x00000000003B4418 string=0x00000000003B441C ""
 *   insn=0x00000000003B442C string=0x00000000003B4430 "\t@"
 *   insn=0x00000000003B4438 string=0x00000000003B443C ""
 *   insn=0x00000000003B444C string=0x00000000003B4450 "@"
 *   insn=0x00000000003B445C string=0x00000000003B4464 ""
 *   insn=0x00000000003B4464 string=0x00000000003B4468 "i""
 *   insn=0x00000000003B446C string=0x00000000003B4470 "\t"
 *   insn=0x00000000003B4470 string=0x00000000003B4474 ")"
 *   insn=0x00000000003B4474 string=0x00000000003B4478 "\t"
 *   insn=0x00000000003B44A0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameOptions::defaultOptions(Caver::GameOptions *this@<X0>, __int64 *a2@<X8>)
{
  __int64 v3; // x9
  __int64 v4; // x0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // [xsp+8h] [xbp-38h]
  __int64 v15; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v3 = qword_6E9998;
  if ( !qword_6E9998 )
  {
    v4 = operator new(0x58u);
    *(_WORD *)(v4 + 32) = 257;
    __asm { FMOV            V0.2S, #1.0 }
    *(_QWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_QWORD *)(v4 + 56) = 0;
    *(_BYTE *)(v4 + 82) = 0;
    *(_WORD *)(v4 + 80) = 0;
    v14 = v4;
    *(_QWORD *)(v4 + 36) = _D0;
    *(_QWORD *)v4 = &byte_6FD2F8;
    *(_QWORD *)(v4 + 8) = 0;
    boost::detail::shared_count::shared_count<Caver::GameOptions>();
    boost::detail::sp_enable_shared_from_this();
    v10 = (_QWORD *)qword_6E99A0;
    qword_6E9998 = v14;
    qword_6E99A0 = v15;
    if ( v10 )
    {
      v11 = v10[1] - 1LL;
      v10[1] = v11;
      if ( !v11 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v12 = v10[2] - 1LL;
        v10[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
    v3 = qword_6E9998;
  }
  v13 = qword_6E99A0;
  *a2 = v3;
  a2[1] = v13;
  if ( v13 )
    ++*(_QWORD *)(v13 + 8);
}

