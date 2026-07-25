/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DAA58
 * Mangled: _ZN5Caver9HealthBar14LayoutSubviewsEv
 * Demangled: Caver::HealthBar::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *
 * Callees: 1
 *   0x00000000001FAFE0  Caver::HealthBar::UpdateSprite(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000003DAA70 string=0x00000000003DAA74 "["
 *   insn=0x00000000003DAA74 string=0x00000000001FAFE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthBar::LayoutSubviews(Caver::HealthBar *this)
{
  float v1; // s2

  v1 = *((float *)this + 36);
  *((float *)this + 71) = (float)(*((float *)this + 71) / *((float *)this + 72)) * v1;
  *((float *)this + 72) = v1;
  return Caver::HealthBar::UpdateSprite(this);
}

