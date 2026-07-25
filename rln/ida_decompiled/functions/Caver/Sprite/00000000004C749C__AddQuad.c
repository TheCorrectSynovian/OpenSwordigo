/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C749C
 * Mangled: _ZN5Caver6Sprite7AddQuadEPKNS_7Vector2ES3_PKNS_5ColorE
 * Demangled: Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *
 * Callers: 1
 *   0x00000000001F4C90  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *
 * Callees: 2
 *   0x00000000001F8350  Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *   0x0000000000200030  Caver::Sprite::AddFace(int,int,int)
 *
 * Referenced strings: 10
 *   insn=0x00000000004C74B8 string=0x00000000004C74BC "h"
 *   insn=0x00000000004C74C8 string=0x00000000004C74CC ""
 *   insn=0x00000000004C74CC string=0x00000000004C74D0 "w.@"
 *   insn=0x00000000004C74E4 string=0x00000000001F8350 "0'"
 *   insn=0x00000000004C7578 string=0x00000000004C757C "u"
 *   insn=0x00000000004C7598 string=0x00000000004C759C "m"
 *   insn=0x00000000004C75B8 string=0x00000000004C75BC "e"
 *   insn=0x00000000004C75CC string=0x00000000004C75D0 "`"
 *   insn=0x00000000004C75E0 string=0x00000000004C75E4 "["
 *   insn=0x00000000004C760C string=0x00000000004C7610 "P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::AddQuad(
        Caver::Sprite *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        const Caver::Color *a4)
{
  int v8; // w23

  if ( *((_QWORD *)this + 4) )
  {
    v8 = *((_DWORD *)this + 11);
    Caver::Sprite::AddVertex(this, a2, a3, a4);
    Caver::Sprite::AddVertex(
      this,
      (const Caver::Vector2 *)((char *)a2 + 8),
      (const Caver::Vector2 *)((char *)a3 + 8),
      (const Caver::Color *)((char *)a4 + 4));
    Caver::Sprite::AddVertex(
      this,
      (const Caver::Vector2 *)((char *)a2 + 24),
      (const Caver::Vector2 *)((char *)a3 + 24),
      (const Caver::Color *)((char *)a4 + 12));
    Caver::Sprite::AddVertex(
      this,
      (const Caver::Vector2 *)((char *)a2 + 16),
      (const Caver::Vector2 *)((char *)a3 + 16),
      (const Caver::Color *)((char *)a4 + 8));
    Caver::Sprite::AddFace(this, v8, v8 + 1, v8 + 2);
    return Caver::Sprite::AddFace(this, v8 + 3, v8 + 2, v8 + 1);
  }
  else
  {
    Caver::Sprite::AddVertex(this, a2, a3, a4);
    Caver::Sprite::AddVertex(
      this,
      (const Caver::Vector2 *)((char *)a2 + 8),
      (const Caver::Vector2 *)((char *)a3 + 8),
      (const Caver::Color *)((char *)a4 + 4));
    Caver::Sprite::AddVertex(
      this,
      (const Caver::Vector2 *)((char *)a2 + 24),
      (const Caver::Vector2 *)((char *)a3 + 24),
      (const Caver::Color *)((char *)a4 + 12));
    Caver::Sprite::AddVertex(
      this,
      (const Caver::Vector2 *)((char *)a2 + 24),
      (const Caver::Vector2 *)((char *)a3 + 24),
      (const Caver::Color *)((char *)a4 + 12));
    Caver::Sprite::AddVertex(
      this,
      (const Caver::Vector2 *)((char *)a2 + 8),
      (const Caver::Vector2 *)((char *)a3 + 8),
      (const Caver::Color *)((char *)a4 + 4));
    return Caver::Sprite::AddVertex(
             this,
             (const Caver::Vector2 *)((char *)a2 + 16),
             (const Caver::Vector2 *)((char *)a3 + 16),
             (const Caver::Color *)((char *)a4 + 8));
  }
}

