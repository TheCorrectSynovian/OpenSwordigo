/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAFC0
 * Mangled: ._ZN5Caver14SceneGridLayer4InitERKNS_9RectangleEffff
 * Demangled: Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *
 * Callers: 1
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Callees: 1
 *   0x000000000046D924  Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAFC8 string=0x00000000001FAFCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::Init(
        Caver::SceneGridLayer *this,
        const Caver::Rectangle *a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  return _ZN5Caver14SceneGridLayer4InitERKNS_9RectangleEffff(this, a2, a3, a4, a5, a6);
}

