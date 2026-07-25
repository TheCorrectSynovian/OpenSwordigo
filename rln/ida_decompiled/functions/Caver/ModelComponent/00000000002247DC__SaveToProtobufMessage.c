/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002247DC
 * Mangled: _ZNK5Caver14ModelComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002027E0  Caver::Proto::ModelComponent::default_instance(void)
 *   0x00000000002249D0  Caver::ModelComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000002247EC string=0x00000000002247F0 "V"
 *   insn=0x0000000000224804 string=0x0000000000224808 "&"
 *   insn=0x0000000000224808 string=0x000000000022480C ""
 *   insn=0x000000000022481C string=0x0000000000224820 "b"
 *   insn=0x000000000022482C string=0x0000000000224830 "PK"
 *   insn=0x0000000000224830 string=0x00000000001F7570 "0'"
 *   insn=0x000000000022483C string=0x0000000000224840 ""
 *   insn=0x0000000000224840 string=0x0000000000224844 "H"
 *   insn=0x0000000000224844 string=0x0000000000224848 "\t&"
 *   insn=0x0000000000224850 string=0x0000000000224854 ")"
 *   insn=0x0000000000224854 string=0x0000000000224858 ""
 *   insn=0x0000000000224868 string=0x000000000022486C "]C"
 *   insn=0x000000000022486C string=0x0000000000224870 "&"
 *   insn=0x000000000022486C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000224870 string=0x0000000000224874 ""
 *   insn=0x0000000000224874 string=0x0000000000224878 "a"
 *   insn=0x0000000000224878 string=0x000000000022487C ""
 *   insn=0x0000000000224890 string=0x0000000000224894 ""
 *   insn=0x000000000022489C string=0x00000000002248B4 "hBL"
 *   insn=0x00000000002248A0 string=0x00000000002248A4 "OC"
 *   insn=0x00000000002248AC string=0x00000000001FAF50 "0'"
 *   insn=0x00000000002248BC string=0x00000000002248C0 "h"
 *   insn=0x00000000002248C0 string=0x00000000002248C4 ")\t"
 *   insn=0x00000000002248C8 string=0x00000000002248CC "hj@"
 *   insn=0x00000000002248D0 string=0x00000000002248D4 " "
 *   insn=0x00000000002248DC string=0x00000000002248E0 "h"
 *   insn=0x00000000002248E4 string=0x00000000002248E8 "a"
 *   insn=0x00000000002248E8 string=0x00000000002248EC "b"
 *   insn=0x00000000002248EC string=0x00000000002248F0 "c"
 *   insn=0x00000000002248F0 string=0x00000000002248F4 "d"
 *   insn=0x00000000002248F4 string=0x00000000002248F8 "!"
 *   insn=0x00000000002248F8 string=0x00000000002248FC "B"
 *   insn=0x00000000002248FC string=0x0000000000224900 "c"
 *   insn=0x0000000000224904 string=0x0000000000224908 "!"
 *   insn=0x0000000000224908 string=0x000000000022490C "B"
 *   insn=0x000000000022490C string=0x0000000000224910 "c"
 *   insn=0x0000000000224920 string=0x0000000000224924 "("
 *   insn=0x0000000000224930 string=0x0000000000224934 "+C"
 *   insn=0x0000000000224938 string=0x000000000022493C "y="
 *   insn=0x000000000022493C string=0x00000000001F3F20 "P'"
 *   insn=0x000000000022494C string=0x0000000000224950 "hrB9"
 *   insn=0x000000000022495C string=0x0000000000224960 "("
 *   insn=0x0000000000224968 string=0x0000000000224980 "`"
 *   insn=0x0000000000224974 string=0x0000000000224978 "j="
 *   insn=0x0000000000224998 string=0x00000000002249B0 "HF"
 *   insn=0x00000000002249B0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002249C0 string=0x00000000002249C4 ";J"
 *   insn=0x00000000002249C4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ModelComponent::SaveToProtobufMessage(
        Caver::ModelComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ModelComponent *v3; // x0
  __int64 v4; // x0
  Caver::Proto::FloatColor *v5; // x2
  unsigned int v6; // s1
  unsigned int v7; // s2
  unsigned int v8; // s3
  unsigned int v9; // s4
  __int64 v10; // x20
  __int64 *v11; // x0
  __int64 v12; // x21
  int v13; // w9
  int v14; // w9
  Caver::Proto::FloatColor *v15; // x21
  Caver::Proto::FloatColor *v16; // x2
  int v17; // w9
  Caver::Proto::FloatColor *v18; // x21
  float v20[4]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v21; // [xsp+18h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::Proto::ModelComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ModelComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v10 = v4;
  if ( *(_QWORD *)(*((_QWORD *)this + 14) - 24LL) )
  {
    v11 = *(__int64 **)(v4 + 16);
    *(_DWORD *)(v10 + 72) |= 1u;
    if ( v11 == &Caver::Proto::ModelComponent::_default_name_ )
    {
      v11 = (__int64 *)operator new(8u);
      *v11 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v10 + 16) = v11;
    }
    sub_56A6A8(v11);
  }
  v12 = *(_QWORD *)(v10 + 24);
  *(_DWORD *)(v10 + 72) |= 2u;
  if ( !v12 )
  {
    v12 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v12);
    *(_QWORD *)(v10 + 24) = v12;
  }
  v13 = *(_DWORD *)(v12 + 24);
  *(_QWORD *)(v12 + 12) = *(_QWORD *)((char *)this + 196);
  *(_DWORD *)(v12 + 20) = *((_DWORD *)this + 51);
  *(_DWORD *)(v12 + 24) = v13 | 7;
  v14 = *(_DWORD *)(v10 + 72);
  *(_QWORD *)(v10 + 32) = *((_QWORD *)this + 26);
  *(_DWORD *)(v10 + 40) = *((_DWORD *)this + 38);
  LOBYTE(v6) = *((_BYTE *)this + 314);
  LOBYTE(v7) = *((_BYTE *)this + 315);
  LOBYTE(v8) = *((_BYTE *)this + 316);
  LOBYTE(v9) = *((_BYTE *)this + 317);
  v20[0] = (float)v6 / 255.0;
  v20[1] = (float)v7 / 255.0;
  v20[2] = (float)v8 / 255.0;
  v20[3] = (float)v9 / 255.0;
  v15 = *(Caver::Proto::FloatColor **)(v10 + 48);
  *(_DWORD *)(v10 + 72) = v14 | 0x3C;
  if ( !v15 )
  {
    v15 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v15);
    *(_QWORD *)(v10 + 48) = v15;
  }
  Caver::FloatColorToProtobufMessage((Caver *)v20, v15, v5);
  v17 = *(_DWORD *)(v10 + 72);
  v18 = *(Caver::Proto::FloatColor **)(v10 + 64);
  *(_BYTE *)(v10 + 56) = *((_BYTE *)this + 156);
  *(_DWORD *)(v10 + 72) = v17 | 0xC0;
  if ( !v18 )
  {
    v18 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v18);
    *(_QWORD *)(v10 + 64) = v18;
  }
  return Caver::FloatColorToProtobufMessage((Caver::ModelComponent *)((char *)this + 160), v18, v16);
}

