/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF530
 * Mangled: ._ZN5Caver11ItemOverlay13UpdateSpritesEv
 * Demangled: Caver::ItemOverlay::UpdateSprites(void)
 *
 * Callers: 1
 *   0x00000000003DE408  Caver::ItemOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF538 string=0x00000000001FF53C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemOverlay::UpdateSprites(Caver::ItemOverlay *this)
{
  return _ZN5Caver11ItemOverlay13UpdateSpritesEv(this);
}

