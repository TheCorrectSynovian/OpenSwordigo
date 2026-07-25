/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000495E34
 * Mangled: _ZN5Caver9GUIButton23SetFrameTextureForStateENS_10GUIControl5StateERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 2
 *   0x0000000000202F10  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000495D00  Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9E10  Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000200A70  Caver::GUIRoundedRect::GUIRoundedRect(void)
 *   0x00000000002022D0  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *   0x0000000000495F58  Caver::GUIButton::SetTextColor(Caver::Color)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x0000000000495E44 string=0x0000000000495E48 "V"
 *   insn=0x0000000000495E58 string=0x0000000000495E5C "a"
 *   insn=0x0000000000495E5C string=0x0000000000495E60 "h"
 *   insn=0x0000000000495E5C string=0x0000000000495EA8 "h"
 *   insn=0x0000000000495E78 string=0x0000000000495EF4 "h"
 *   insn=0x0000000000495E80 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000495E88 string=0x0000000000495E8C "h"
 *   insn=0x0000000000495E90 string=0x0000000000495E94 "u"
 *   insn=0x0000000000495E98 string=0x0000000000495E9C ""
 *   insn=0x0000000000495E9C string=0x0000000000495EA0 "`"
 *   insn=0x0000000000495ED0 string=0x0000000000495ED4 "h"
 *   insn=0x0000000000495ED8 string=0x0000000000495EDC "u"
 *   insn=0x0000000000495EE4 string=0x0000000000495EE8 "`"
 *   insn=0x0000000000495EF0 string=0x00000000001F9E10 "0'"
 *   insn=0x0000000000495EF4 string=0x0000000000495EF8 "`"
 *   insn=0x0000000000495EF4 string=0x0000000000583944 "\n"
 *   insn=0x0000000000495F04 string=0x0000000000495F08 "h"
 *   insn=0x0000000000495F0C string=0x0000000000495F10 "-@"
 *   insn=0x0000000000495F3C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000495F4C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000495F50 string=0x0000000000495F54 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIButton::SetFrameTextureForState(__int64 a1, char a2, _QWORD *a3)
{
  Caver::GUIRoundedRect *v5; // x21
  Caver::GUIRoundedRect *v6; // x21

  _ReadStatusReg(TPIDR_EL0);
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr();
    if ( !*a3 )
      goto LABEL_7;
    v6 = (Caver::GUIRoundedRect *)operator new(0xA8u);
    Caver::GUIRoundedRect::GUIRoundedRect(v6);
    *(_QWORD *)(a1 + 304) = v6;
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr();
  }
  else
  {
    *(_QWORD *)(a1 + 296) = 0;
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr();
    if ( !*a3 )
      goto LABEL_7;
    v5 = (Caver::GUIRoundedRect *)operator new(0xA8u);
    Caver::GUIRoundedRect::GUIRoundedRect(v5);
    *(_QWORD *)(a1 + 296) = v5;
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr();
  }
  Caver::GUIRoundedRect::InitWithTexture();
LABEL_7:
  if ( *(float *)(a1 + 140) > 0.01 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
}

