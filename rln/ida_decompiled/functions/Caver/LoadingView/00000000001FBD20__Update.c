/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD20
 * Mangled: ._ZN5Caver11LoadingView6UpdateEf
 * Demangled: Caver::LoadingView::Update(float)
 *
 * Callers: 1
 *   0x000000000043650C  Caver::SceneLoadingView::Update(float)
 *
 * Callees: 1
 *   0x000000000041CD00  Caver::LoadingView::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBD24 string=0x000000000041CD00 "p"
 *   insn=0x00000000001FBD28 string=0x00000000001FBD2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LoadingView::Update(Caver::LoadingView *this, float a2)
{
  return _ZN5Caver11LoadingView6UpdateEf(this, a2);
}

