/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D4A8
 * Mangled: _ZN5Caver19BackgroundComponentC2Ev
 * Demangled: Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Callers: 2
 *   0x00000000001F5C40  Caver::BackgroundComponent::BackgroundComponent(void)
 *   0x00000000001FF840  Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x000000000021D4B8 string=0x000000000021D4BC "U"
 *   insn=0x000000000021D4BC string=0x000000000021D4C0 "H&"
 *   insn=0x000000000021D4C0 string=0x000000000021D4C4 ""
 *   insn=0x000000000021D4CC string=0x000000000021D4D0 "\n"
 *   insn=0x000000000021D4D4 string=0x000000000021D4D8 "I&"
 *   insn=0x000000000021D4D8 string=0x000000000021D4DC ")"
 *   insn=0x000000000021D4DC string=0x000000000021D4E0 "@"
 *   insn=0x000000000021D4E0 string=0x000000000021D4E4 "\n"
 *   insn=0x000000000021D4E4 string=0x000000000021D4E8 "A"
 *   insn=0x000000000021D4E8 string=0x000000000021D4EC ")a"
 *   insn=0x000000000021D4EC string=0x000000000021D4F0 "i"
 *   insn=0x000000000021D4F4 string=0x000000000021D4F8 "@"
 *   insn=0x000000000021D504 string=0x000000000021D508 "?"
 *   insn=0x000000000021D508 string=0x000000000021D50C "h"
 *   insn=0x000000000021D50C string=0x000000000021D510 ""
 *   insn=0x000000000021D518 string=0x000000000021D51C "`"
 *   insn=0x000000000021D51C string=0x000000000021D520 "hz"
 *   insn=0x000000000021D520 string=0x000000000021D524 "i2"
 *   insn=0x000000000021D52C string=0x000000000021D530 ",`"
 *   insn=0x000000000021D530 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021D560 string=0x000000000021D564 "k}"
 *   insn=0x000000000021D564 string=0x00000000001FCB10 "0'"
 *   insn=0x000000000021D574 string=0x000000000021D578 "hRH"
 *   insn=0x000000000021D584 string=0x000000000021D588 "i""
 *   insn=0x000000000021D58C string=0x000000000021D590 "4"
 *   insn=0x000000000021D594 string=0x000000000021D598 ""
 *   insn=0x000000000021D5A4 string=0x000000000021D5A8 "\t@"
 *   insn=0x000000000021D5B4 string=0x000000000021D5B8 ""
 *   insn=0x000000000021D5C4 string=0x000000000021D5C8 "@"
 *   insn=0x000000000021D5E0 string=0x000000000021D5F8 "6c"
 *   insn=0x000000000021D5F8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021D600 string=0x000000000021D604 "5"
 *   insn=0x000000000021D608 string=0x000000000021D60C ""
 *   insn=0x000000000021D618 string=0x000000000021D61C "\t@"
 *   insn=0x000000000021D628 string=0x000000000021D62C ""
 *   insn=0x000000000021D638 string=0x000000000021D63C "@"
 *   insn=0x000000000021D64C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000021D654 string=0x000000000021D658 "="
 *   insn=0x000000000021D66C string=0x000000000021D670 "V"
 *   insn=0x000000000021D67C string=0x000000000021D680 "a"
 *   insn=0x000000000021D684 string=0x000000000021D688 "h"@"
 *   insn=0x000000000021D6F8 string=0x000000000021D6FC "5"
 *   insn=0x000000000021D700 string=0x000000000021D704 ""
 *   insn=0x000000000021D714 string=0x000000000021D718 "\t@"
 *   insn=0x000000000021D720 string=0x000000000021D724 ""
 *   insn=0x000000000021D734 string=0x000000000021D738 "@"
 *   insn=0x000000000021D740 string=0x000000000021D744 "aB@"
 *   insn=0x000000000021D750 string=0x00000000001FD5B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BackgroundComponent::BackgroundComponent(Caver::BackgroundComponent *this)
{
  __int128 v2; // q0
  __int64 v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // [xsp+50h] [xbp-38h]
  __int64 v8; // [xsp+58h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)&v2 = &off_6B9BC0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)&v2 + 1) = &off_6B9C00;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *(_QWORD *)this = off_6B9AA0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_OWORD *)this + 1) = v2;
  *((_DWORD *)this + 30) = -1082130432;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  v3 = operator new(0x58u);
  *(_DWORD *)(v3 + 48) = 0;
  *(_BYTE *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 56) = 0;
  v7 = v3;
  *(_OWORD *)(v3 + 16) = 0u;
  *(_OWORD *)(v3 + 32) = 0u;
  *(_OWORD *)v3 = 0u;
  *(_OWORD *)(v3 + 64) = 0u;
  boost::detail::shared_count::shared_count<Caver::Sprite>();
  boost::detail::sp_enable_shared_from_this();
  v4 = (_QWORD *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 16) = v7;
  *((_QWORD *)this + 17) = v8;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
}

