/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5CC0
 * Mangled: ._ZN5Caver8GUILabel7AddTextERKSs
 * Demangled: Caver::GUILabel::AddText(std::string const&)
 *
 * Callers: 2
 *   0x00000000004980FC  Caver::GUILabel::AddText(std::string const&,Caver::Color)
 *   0x0000000000498130  Caver::GUILabel::AddText(std::string const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callees: 1
 *   0x0000000000497FDC  Caver::GUILabel::AddText(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5CC8 string=0x00000000001F5CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUILabel::AddText()
{
  return _ZN5Caver8GUILabel7AddTextERKSs();
}

