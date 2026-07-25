/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004859C8
 * Mangled: _ZN5Caver12SoundLibrary21SaveToProtobufMessageEPNS_5Proto12SoundLibraryE
 * Demangled: Caver::SoundLibrary::SaveToProtobufMessage(Caver::Proto::SoundLibrary *)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F3750  Caver::Proto::SoundEffect::SoundEffect(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FFFF0  Caver::SoundEffect::SaveToProtobufMessage(Caver::Proto::SoundEffect *)
 *   0x0000000000485AAC  Caver::SoundLibrary::Clear(void)
 *   0x000000000054C640  sub_54C640
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000004859EC string=0x00000000004859F0 "uB"
 *   insn=0x00000000004859F0 string=0x00000000004859F4 "i"C)"
 *   insn=0x00000000004859F8 string=0x00000000004859FC ")}@"
 *   insn=0x00000000004859FC string=0x0000000000485A00 "?"
 *   insn=0x0000000000485A04 string=0x0000000000485A08 "h\n@"
 *   insn=0x0000000000485A04 string=0x0000000000485A1C "i"@"
 *   insn=0x0000000000485A08 string=0x0000000000485A0C "*"
 *   insn=0x0000000000485A0C string=0x0000000000485A10 "j"
 *   insn=0x0000000000485A24 string=0x0000000000485A38 ""
 *   insn=0x0000000000485A30 string=0x0000000000485A34 "h"
 *   insn=0x0000000000485A30 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000485A3C string=0x0000000000485A40 "h"
 *   insn=0x0000000000485A44 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000485A48 string=0x0000000000485A4C "A"
 *   insn=0x0000000000485A4C string=0x0000000000485A50 "h"
 *   insn=0x0000000000485A4C string=0x00000000001F3750 "P'"
 *   insn=0x0000000000485A50 string=0x0000000000485A54 "i\n@"
 *   insn=0x0000000000485A54 string=0x0000000000485A58 "\n"
 *   insn=0x0000000000485A58 string=0x0000000000485A5C "j"
 *   insn=0x0000000000485A5C string=0x0000000000485A60 "7y("
 *   insn=0x0000000000485A68 string=0x0000000000485A6C "a"
 *   insn=0x0000000000485AA0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundLibrary::SaveToProtobufMessage(__int64 this, Caver::Proto::SoundLibrary *a2)
{
  __int64 v2; // x20
  __int64 v3; // x24
  int v5; // w8
  Caver::SoundEffect *v6; // x22
  __int64 v7; // x9
  __int64 v8; // x8
  Caver::Proto::SoundEffect *v9; // x23
  __int64 v10; // x8
  __int64 v11; // x9

  v2 = *(_QWORD *)(this + 24);
  v3 = this + 8;
  if ( this + 8 != v2 )
  {
    do
    {
      v5 = *((_DWORD *)a2 + 7);
      v6 = *(Caver::SoundEffect **)(v2 + 40);
      v7 = *((int *)a2 + 6);
      if ( (int)v7 >= v5 )
      {
        if ( v5 == *((_DWORD *)a2 + 8) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (Caver::Proto::SoundLibrary *)((char *)a2 + 16),
            v5 + 1);
          v5 = *((_DWORD *)a2 + 7);
        }
        *((_DWORD *)a2 + 7) = v5 + 1;
        v9 = (Caver::Proto::SoundEffect *)operator new(0x30u);
        Caver::Proto::SoundEffect::SoundEffect(v9);
        v10 = *((int *)a2 + 6);
        v11 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v10 + 1;
        *(_QWORD *)(v11 + 8 * v10) = v9;
      }
      else
      {
        v8 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v7 + 1;
        v9 = *(Caver::Proto::SoundEffect **)(v8 + 8 * v7);
      }
      Caver::SoundEffect::SaveToProtobufMessage(v6, v9);
      this = sub_54C640(v2);
      v2 = this;
    }
    while ( v3 != this );
  }
  return this;
}

