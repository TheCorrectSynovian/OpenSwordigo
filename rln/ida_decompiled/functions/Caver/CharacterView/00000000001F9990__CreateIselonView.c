/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9990
 * Mangled: ._ZN5Caver13CharacterView16CreateIselonViewEv
 * Demangled: Caver::CharacterView::CreateIselonView(void)
 *
 * Callers: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9998 string=0x00000000001F999C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharacterView::CreateIselonView(Caver::CharacterView *this)
{
  JUMPOUT(0x3FC1B8);
}

