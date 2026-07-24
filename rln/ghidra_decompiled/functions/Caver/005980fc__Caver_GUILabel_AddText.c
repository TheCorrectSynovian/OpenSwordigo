/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005980fc
 * Function: Caver::GUILabel::AddText
 * Signature: undefined __thiscall AddText(GUILabel * this, string * param_1, Color param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::AddText(std::string const&, Caver::Color) */

void __thiscall Caver::GUILabel::AddText(GUILabel *this,string *param_1,Color *param_3)

{
  FontText::SetColor(*(FontText **)(this + 0x120),param_3);
  AddText(this,param_1);
  return;
}


