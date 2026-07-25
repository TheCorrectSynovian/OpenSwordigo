/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000226D64
 * Mangled: _ZNK5Caver33ModelTransformControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001FF880  Caver::Proto::ModelTransformControllerComponent::default_instance(void)
 *   0x0000000000226F20  Caver::ModelTransformControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000226D78 string=0x0000000000226D7C "V"
 *   insn=0x0000000000226D8C string=0x0000000000226D90 "da"
 *   insn=0x0000000000226D90 string=0x0000000000226D94 "&"
 *   insn=0x0000000000226D94 string=0x0000000000226D98 ")C"
 *   insn=0x0000000000226DA8 string=0x0000000000226DAC "b"
 *   insn=0x0000000000226DBC string=0x00000000001F7570 "0'"
 *   insn=0x0000000000226DC4 string=0x0000000000226DC8 "iz@"
 *   insn=0x0000000000226DCC string=0x0000000000226DD0 "`2"
 *   insn=0x0000000000226DD0 string=0x0000000000226DD4 ""
 *   insn=0x0000000000226DE0 string=0x0000000000226DE4 ""
 *   insn=0x0000000000226DE4 string=0x0000000000226DE8 "!"
 *   insn=0x0000000000226DEC string=0x0000000000226DF0 "X<"
 *   insn=0x0000000000226DF0 string=0x0000000000226DF4 " "
 *   insn=0x0000000000226DF0 string=0x00000000001F5F50 "P'"
 *   insn=0x0000000000226DFC string=0x0000000000226E00 ""
 *   insn=0x0000000000226E08 string=0x0000000000226E20 "h"
 *   insn=0x0000000000226E10 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000226E14 string=0x0000000000226E18 "NP"
 *   insn=0x0000000000226E18 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000226E28 string=0x0000000000226E2C "h"
 *   insn=0x0000000000226E2C string=0x0000000000226E30 ")\t"
 *   insn=0x0000000000226E3C string=0x0000000000226E40 "`b"
 *   insn=0x0000000000226E50 string=0x0000000000226E54 "?<"
 *   insn=0x0000000000226E54 string=0x0000000000226E58 " "
 *   insn=0x0000000000226E58 string=0x0000000000226E9C "`"
 *   insn=0x0000000000226E60 string=0x0000000000226E64 ""
 *   insn=0x0000000000226E6C string=0x0000000000226E84 "hN@"
 *   insn=0x0000000000226E78 string=0x0000000000226E7C "5P"
 *   insn=0x0000000000226E8C string=0x0000000000226E90 "h"
 *   insn=0x0000000000226E90 string=0x0000000000226E94 ")\t"
 *   insn=0x0000000000226EA0 string=0x0000000000226EA4 "  ("
 *   insn=0x0000000000226EA8 string=0x0000000000226EBC "`"
 *   insn=0x0000000000226EB0 string=0x0000000000226EB4 ""
 *   insn=0x0000000000226EC0 string=0x0000000000226EC4 "  ("
 *   insn=0x0000000000226ED0 string=0x0000000000226ED4 ""
 *   insn=0x0000000000226F04 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000226F14 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000226F18 string=0x0000000000226F1C "jj"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelTransformControllerComponent::SaveToProtobufMessage(
        Caver::ModelTransformControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ModelTransformControllerComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w9
  __int64 v6; // x21
  int v7; // w9
  __int64 v8; // x21
  int v9; // w9
  float v10; // s0
  int v11; // w8
  float v12; // s0
  int v13; // w8
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+10h] [xbp-40h]
  __int64 v16; // [xsp+18h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::Proto::ModelTransformControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ModelTransformControllerComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *((_DWORD *)this + 30);
  *(_DWORD *)(v4 + 40) |= 1u;
  *(_DWORD *)(v4 + 12) = v5;
  if ( (Caver::Vector3::IsClose(
          (Caver::ModelTransformControllerComponent *)((char *)this + 140),
          (const Caver::Vector3 *)&Caver::Vector3Zero,
          0.0001)
      & 1) == 0 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 40) |= 2u;
    if ( !v6 )
    {
      v6 = operator new(0x20u);
      Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v6);
      *(_QWORD *)(v4 + 16) = v6;
    }
    v7 = *(_DWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 12) = *(_QWORD *)((char *)this + 140);
    *(_DWORD *)(v6 + 20) = *((_DWORD *)this + 37);
    *(_DWORD *)(v6 + 24) = v7 | 7;
  }
  v15 = 0;
  v14 = 0x3F80000000000000LL;
  if ( (Caver::Vector3::IsClose(
          (Caver::ModelTransformControllerComponent *)((char *)this + 152),
          (const Caver::Vector3 *)&v14,
          0.0001)
      & 1) == 0 )
  {
    v8 = *(_QWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 40) |= 4u;
    if ( !v8 )
    {
      v8 = operator new(0x20u);
      Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v8);
      *(_QWORD *)(v4 + 24) = v8;
    }
    v9 = *(_DWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 12) = *((_QWORD *)this + 19);
    *(_DWORD *)(v8 + 20) = *((_DWORD *)this + 40);
    *(_DWORD *)(v8 + 24) = v9 | 7;
  }
  v10 = *((float *)this + 41);
  if ( fabsf(v10) > 0.0001 )
  {
    v11 = *(_DWORD *)(v4 + 40);
    *(float *)(v4 + 32) = v10;
    *(_DWORD *)(v4 + 40) = v11 | 8;
  }
  v12 = *((float *)this + 42);
  if ( fabsf(v12) > 0.0001 )
  {
    v13 = *(_DWORD *)(v4 + 40);
    *(float *)(v4 + 36) = v12;
    *(_DWORD *)(v4 + 40) = v13 | 0x10;
  }
}

