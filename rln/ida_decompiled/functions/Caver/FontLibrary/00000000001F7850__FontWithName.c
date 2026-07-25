/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7850
 * Mangled: ._ZN5Caver11FontLibrary12FontWithNameERKSs
 * Demangled: Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Callers: 3
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x00000000004C259C  Caver::Font::FontWithName(std::string const&)
 *   0x00000000004C40DC  Caver::FontLibrary::SystemFont(void)
 *
 * Callees: 1
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7858 string=0x00000000001F785C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FontLibrary::FontWithName()
{
  return _ZN5Caver11FontLibrary12FontWithNameERKSs();
}

