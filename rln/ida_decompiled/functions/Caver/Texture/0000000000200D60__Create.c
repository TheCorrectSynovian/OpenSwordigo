/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D60
 * Mangled: ._ZN5Caver7Texture6CreateEiiNS_11PixelFormatEf
 * Demangled: Caver::Texture::Create(int,int,Caver::PixelFormat,float)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004CC0CC  Caver::Texture::Create(int,int,Caver::PixelFormat,float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200D64 string=0x00000000004CC0CC "!"
 *   insn=0x0000000000200D68 string=0x0000000000200D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Texture::Create()
{
  return _ZN5Caver7Texture6CreateEiiNS_11PixelFormatEf();
}

