/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9620
 * Mangled: ._ZN5Caver13CharacterView26CreateAttributesHeaderViewEv
 * Demangled: Caver::CharacterView::CreateAttributesHeaderView(void)
 *
 * Callers: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9628 string=0x00000000001F962C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterView::CreateAttributesHeaderView(Caver::CharacterView *this)
{
  return _ZN5Caver13CharacterView26CreateAttributesHeaderViewEv(this);
}

