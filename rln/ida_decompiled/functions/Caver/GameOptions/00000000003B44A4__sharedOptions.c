/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B44A4
 * Mangled: _ZN5Caver11GameOptions13sharedOptionsEv
 * Demangled: Caver::GameOptions::sharedOptions(void)
 *
 * Callers: 1
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63B0  boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *
 * Referenced strings: 23
 *   insn=0x00000000003B44B4 string=0x00000000003B44B8 "U"
 *   insn=0x00000000003B44D4 string=0x00000000003B44D8 "B"
 *   insn=0x00000000003B44D8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B44DC string=0x00000000003B44E0 ""
 *   insn=0x00000000003B44E4 string=0x00000000003B44E8 ") "
 *   insn=0x00000000003B44F4 string=0x00000000003B44F8 "a"
 *   insn=0x00000000003B44F8 string=0x00000000003B44FC " !"
 *   insn=0x00000000003B4524 string=0x00000000001F63B0 "0'"
 *   insn=0x00000000003B4530 string=0x00000000003B4534 "9"
 *   insn=0x00000000003B4538 string=0x00000000003B4540 "\tQ@"
 *   insn=0x00000000003B4550 string=0x00000000003B4554 "\n%"
 *   insn=0x00000000003B4554 string=0x00000000003B4558 "4"
 *   insn=0x00000000003B455C string=0x00000000003B4560 ""
 *   insn=0x00000000003B4570 string=0x00000000003B4574 "\t@"
 *   insn=0x00000000003B457C string=0x00000000003B4580 ""
 *   insn=0x00000000003B4590 string=0x00000000003B4594 "@"
 *   insn=0x00000000003B45A0 string=0x00000000003B45A8 ""
 *   insn=0x00000000003B45A8 string=0x00000000003B45AC "i""
 *   insn=0x00000000003B45B0 string=0x00000000003B45B4 "\t"
 *   insn=0x00000000003B45B4 string=0x00000000003B45B8 ")"
 *   insn=0x00000000003B45B8 string=0x00000000003B45BC "\t"
 *   insn=0x00000000003B45CC string=0x00000000003B45E4 ";"
 *   insn=0x00000000003B45E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameOptions::sharedOptions(Caver::GameOptions *this@<X0>, __int64 *a2@<X8>)
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
  v3 = qword_6E99A8;
  if ( !qword_6E99A8 )
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
    v10 = (_QWORD *)qword_6E99B0;
    qword_6E99A8 = v14;
    qword_6E99B0 = v15;
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
    v3 = qword_6E99A8;
  }
  v13 = qword_6E99B0;
  *a2 = v3;
  a2[1] = v13;
  if ( v13 )
    ++*(_QWORD *)(v13 + 8);
}

