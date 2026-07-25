/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA9B4
 * Mangled: _ZNK5Caver19WeaponGlowComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::WeaponGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FC8F0  Caver::Proto::WeaponGlowComponent::default_instance(void)
 *   0x00000000001FE0B0  Caver::GlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002CAB10  Caver::WeaponGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x00000000002CA9C4 string=0x00000000002CA9C8 "V"
 *   insn=0x00000000002CA9E0 string=0x00000000002CA9E4 ""
 *   insn=0x00000000002CA9F0 string=0x00000000001FC8F0 "0'"
 *   insn=0x00000000002CA9F4 string=0x00000000002CA9F8 "b"
 *   insn=0x00000000002CAA08 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002CAA0C string=0x00000000002CAA10 "h"
 *   insn=0x00000000002CAA1C string=0x00000000002CAA20 "("
 *   insn=0x00000000002CAA28 string=0x00000000002CAA40 "`"
 *   insn=0x00000000002CAA30 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CAA34 string=0x00000000002CAA38 ":"
 *   insn=0x00000000002CAA38 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002CAA48 string=0x00000000002CAA4C "`"
 *   insn=0x00000000002CAA50 string=0x00000000002CAA54 "a"
 *   insn=0x00000000002CAA54 string=0x00000000002CAA58 "b"
 *   insn=0x00000000002CAA58 string=0x00000000002CAA5C "c"
 *   insn=0x00000000002CAA64 string=0x00000000002CAA68 "!"
 *   insn=0x00000000002CAA68 string=0x00000000002CAA6C "B"
 *   insn=0x00000000002CAA6C string=0x00000000002CAA70 "c"
 *   insn=0x00000000002CAA74 string=0x00000000002CAA78 "!"
 *   insn=0x00000000002CAA78 string=0x00000000002CAA7C "B"
 *   insn=0x00000000002CAA7C string=0x00000000002CAA80 "c"
 *   insn=0x00000000002CAA90 string=0x00000000002CAA94 ""
 *   insn=0x00000000002CAAB8 string=0x00000000002CAABC "y"
 *   insn=0x00000000002CAAC0 string=0x00000000002CAAC4 "i"
 *   insn=0x00000000002CAAC4 string=0x00000000002CAAC8 ""
 *   insn=0x00000000002CAAF4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CAB04 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CAB08 string=0x00000000002CAB0C "n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponGlowComponent::SaveToProtobufMessage(
        Caver::WeaponGlowComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::WeaponGlowComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w9
  Caver::Proto::FloatColor *v7; // x21
  Caver::Proto::FloatColor *v8; // x2
  unsigned int v9; // s0
  unsigned int v10; // s1
  unsigned int v11; // s2
  unsigned int v12; // s3
  Caver::Proto::FloatColor *v13; // x21
  __int64 result; // x0
  int v15; // w8
  float v16[4]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v17; // [xsp+18h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::Proto::WeaponGlowComponent *)Caver::GlowComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::WeaponGlowComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 36);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 16);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 36);
  *(_DWORD *)(v5 + 36) = v6 | 3;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 16) = v7;
  }
  Caver::FloatColorToProtobufMessage((Caver::WeaponGlowComponent *)((char *)this + 164), v7, v4);
  LOBYTE(v9) = *((_BYTE *)this + 180);
  LOBYTE(v10) = *((_BYTE *)this + 181);
  LOBYTE(v11) = *((_BYTE *)this + 182);
  LOBYTE(v12) = *((_BYTE *)this + 183);
  v16[0] = (float)v9 / 255.0;
  v16[1] = (float)v10 / 255.0;
  v16[2] = (float)v11 / 255.0;
  v16[3] = (float)v12 / 255.0;
  v13 = *(Caver::Proto::FloatColor **)(v5 + 24);
  *(_DWORD *)(v5 + 36) |= 4u;
  if ( !v13 )
  {
    v13 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v13);
    *(_QWORD *)(v5 + 24) = v13;
  }
  result = Caver::FloatColorToProtobufMessage((Caver *)v16, v13, v8);
  v15 = *(_DWORD *)(v5 + 36) | 8;
  *(_DWORD *)(v5 + 32) = *((_DWORD *)this + 61);
  *(_DWORD *)(v5 + 36) = v15;
  return result;
}

