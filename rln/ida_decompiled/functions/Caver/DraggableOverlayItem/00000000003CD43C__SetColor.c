/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CD43C
 * Mangled: _ZN5Caver20DraggableOverlayItem8SetColorENS_5ColorE
 * Demangled: Caver::DraggableOverlayItem::SetColor(Caver::Color)
 *
 * Callers: 2
 *   0x00000000001FC120  Caver::DraggableOverlayItem::SetColor(Caver::Color)
 *   0x00000000003CCB70  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Referenced strings: 25
 *   insn=0x00000000003CD44C string=0x00000000003CD450 "U"
 *   insn=0x00000000003CD464 string=0x00000000003CD468 "a"
 *   insn=0x00000000003CD468 string=0x00000000003CD46C "b"
 *   insn=0x00000000003CD46C string=0x00000000003CD470 "c\n@=d"
 *   insn=0x00000000003CD470 string=0x00000000003CD474 "d"
 *   insn=0x00000000003CD474 string=0x00000000003CD478 "!"
 *   insn=0x00000000003CD478 string=0x00000000003CD47C "B"
 *   insn=0x00000000003CD47C string=0x00000000003CD480 "! "
 *   insn=0x00000000003CD480 string=0x00000000003CD484 "c"
 *   insn=0x00000000003CD484 string=0x00000000003CD488 "B "
 *   insn=0x00000000003CD488 string=0x00000000003CD48C "("
 *   insn=0x00000000003CD490 string=0x00000000003CD494 "c "
 *   insn=0x00000000003CD494 string=0x00000000003CD498 "I"
 *   insn=0x00000000003CD4A0 string=0x00000000003CD4A4 "k"
 *   insn=0x00000000003CD4A4 string=0x00000000003CD4A8 ""
 *   insn=0x00000000003CD4A8 string=0x00000000003CD4AC "?"
 *   insn=0x00000000003CD4B0 string=0x00000000003CD4B4 ")"
 *   insn=0x00000000003CD4C0 string=0x00000000003CD4C4 "h"
 *   insn=0x00000000003CD4E4 string=0x00000000003CD4E8 "h"
 *   insn=0x00000000003CD4E4 string=0x00000000001F64D0 "0'"
 *   insn=0x00000000003CD4F4 string=0x00000000003CD4F8 "h"
 *   insn=0x00000000003CD4FC string=0x00000000003CD500 "h\n@9"
 *   insn=0x00000000003CD504 string=0x00000000003CD508 "h"
 *   insn=0x00000000003CD520 string=0x00000000003CD538 "f"
 *   insn=0x00000000003CD538 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::DraggableOverlayItem::SetColor()
{
  _ReadStatusReg(TPIDR_EL0);
  Caver::GUIRoundedRect::SetColor();
  return Caver::GUIRoundedRect::SetColor();
}

