/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228C7C
 * Mangled: _ZNK5Caver29ObjectLinkControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F92D0  Caver::Proto::ObjectLinkControllerComponent::default_instance(void)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 68
 *   insn=0x0000000000228C90 string=0x0000000000228C94 "V"
 *   insn=0x0000000000228CAC string=0x0000000000228CB0 ""
 *   insn=0x0000000000228CBC string=0x00000000001F92D0 "0'"
 *   insn=0x0000000000228CC0 string=0x0000000000228CC4 "b"
 *   insn=0x0000000000228CD0 string=0x0000000000228CD4 "':"
 *   insn=0x0000000000228CD4 string=0x0000000000228CD8 "h>@"
 *   insn=0x0000000000228CD4 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000228CD8 string=0x0000000000228CDC "i"
 *   insn=0x0000000000228CE4 string=0x0000000000228CE8 "\nA"
 *   insn=0x0000000000228CEC string=0x0000000000228CF0 "!"
 *   insn=0x0000000000228CF0 string=0x0000000000228CF4 ""
 *   insn=0x0000000000228D00 string=0x0000000000228D04 ")"
 *   insn=0x0000000000228D04 string=0x0000000000228D08 ""
 *   insn=0x0000000000228D18 string=0x0000000000228D1C "12"
 *   insn=0x0000000000228D1C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000228D20 string=0x0000000000228D24 ""
 *   insn=0x0000000000228D24 string=0x0000000000228D28 "a"
 *   insn=0x0000000000228D28 string=0x0000000000228D2C ""
 *   insn=0x0000000000228D34 string=0x0000000000228D38 "\"
 *   insn=0x0000000000228D5C string=0x0000000000228D60 ")"
 *   insn=0x0000000000228D60 string=0x0000000000228D64 "uB"
 *   insn=0x0000000000228D64 string=0x0000000000228D68 ""
 *   insn=0x0000000000228D80 string=0x0000000000228D84 ""
 *   insn=0x0000000000228D8C string=0x0000000000228D90 "F"
 *   insn=0x0000000000228D98 string=0x0000000000228D9C ""
 *   insn=0x0000000000228DA4 string=0x0000000000228DBC "h"
 *   insn=0x0000000000228DA8 string=0x0000000000228DAC "2"
 *   insn=0x0000000000228DB0 string=0x0000000000228DB4 "gH"
 *   insn=0x0000000000228DB4 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000228DC4 string=0x0000000000228DC8 "h"
 *   insn=0x0000000000228DC8 string=0x0000000000228DCC ")\t"
 *   insn=0x0000000000228DD8 string=0x0000000000228DDC ""
 *   insn=0x0000000000228DE4 string=0x0000000000228DFC "h~@"
 *   insn=0x0000000000228DF0 string=0x0000000000228DF4 "WH"
 *   insn=0x0000000000228E04 string=0x0000000000228E08 "h"
 *   insn=0x0000000000228E08 string=0x0000000000228E0C ")\t"
 *   insn=0x0000000000228E18 string=0x0000000000228E1C ""
 *   insn=0x0000000000228E24 string=0x0000000000228E3C "h"
 *   insn=0x0000000000228E30 string=0x0000000000228E34 "GH"
 *   insn=0x0000000000228E3C string=0x0000000000228E40 ""
 *   insn=0x0000000000228E48 string=0x0000000000228E4C "h"
 *   insn=0x0000000000228E4C string=0x0000000000228E50 ")\t"
 *   insn=0x0000000000228E80 string=0x0000000000228E84 ")=G"
 *   insn=0x0000000000228E84 string=0x0000000000228E88 "!"
 *   insn=0x0000000000228E8C string=0x0000000000228E90 "\t"
 *   insn=0x0000000000228E8C string=0x0000000000228EA4 "\t"
 *   insn=0x0000000000228E90 string=0x0000000000228E94 "*"
 *   insn=0x0000000000228E94 string=0x0000000000228E98 "\n"
 *   insn=0x0000000000228EA0 string=0x0000000000228EB0 "?"
 *   insn=0x0000000000228EA4 string=0x0000000000228EA8 "*"
 *   insn=0x0000000000228EA8 string=0x0000000000228EAC "\n"
 *   insn=0x0000000000228EB8 string=0x0000000000228EBC ":"
 *   insn=0x0000000000228EC4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000228ED8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000228EDC string=0x0000000000228EE0 "yb"
 *   insn=0x0000000000228EE8 string=0x0000000000228EEC "J"
 *   insn=0x0000000000228EF0 string=0x0000000000228EF4 "(a"
 *   insn=0x0000000000228F00 string=0x0000000000228F04 "J=G"
 *   insn=0x0000000000228F04 string=0x0000000000228F08 ")!"
 *   insn=0x0000000000228F0C string=0x0000000000228F10 "*"
 *   insn=0x0000000000228F0C string=0x0000000000228F3C "*"
 *   insn=0x0000000000228F10 string=0x0000000000228F14 "K"
 *   insn=0x0000000000228F14 string=0x0000000000228F18 "+"
 *   insn=0x0000000000228F1C string=0x0000000000228F20 "_"
 *   insn=0x0000000000228F34 string=0x0000000000228F38 "cb"
 *   insn=0x0000000000228F3C string=0x0000000000228F40 "K"
 *   insn=0x0000000000228F40 string=0x0000000000228F44 "+"
 *   insn=0x0000000000228F44 string=0x0000000000228F48 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(
        Caver::ObjectLinkControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ObjectLinkControllerComponent *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  char *v7; // x1
  __int64 *v8; // x0
  void *v9; // x0
  __int64 *v10; // x0
  __int64 v11; // x21
  int v12; // w9
  __int64 v13; // x21
  int v14; // w9
  __int64 v15; // x21
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  _QWORD v19[3]; // [xsp+8h] [xbp-48h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::Proto::ObjectLinkControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ObjectLinkControllerComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *((_QWORD *)this + 15);
  v6 = v4;
  if ( v5 )
    v7 = (char *)(v5 + 80);
  else
    v7 = (char *)this + 112;
  sub_56A528(v19, v7);
  v8 = *(__int64 **)(v6 + 16);
  *(_DWORD *)(v6 + 56) |= 1u;
  if ( v8 == &Caver::Proto::ObjectLinkControllerComponent::_default_target_object_identifier_ )
  {
    v8 = (__int64 *)operator new(8u);
    *v8 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v6 + 16) = v8;
  }
  sub_56A6A8(v8);
  v9 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v19[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v9);
  }
  v10 = *(__int64 **)(v6 + 24);
  *(_DWORD *)(v6 + 56) |= 2u;
  if ( v10 == &Caver::Proto::ObjectLinkControllerComponent::_default_target_bone_identifier_ )
  {
    v10 = (__int64 *)operator new(8u);
    *v10 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v6 + 24) = v10;
  }
  sub_56A6A8(v10);
  v11 = *(_QWORD *)(v6 + 32);
  *(_DWORD *)(v6 + 56) |= 4u;
  if ( !v11 )
  {
    v11 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v11);
    *(_QWORD *)(v6 + 32) = v11;
  }
  v12 = *(_DWORD *)(v11 + 24);
  *(_QWORD *)(v11 + 12) = *(_QWORD *)((char *)this + 236);
  *(_DWORD *)(v11 + 20) = *((_DWORD *)this + 61);
  *(_DWORD *)(v11 + 24) = v12 | 7;
  v13 = *(_QWORD *)(v6 + 40);
  *(_DWORD *)(v6 + 56) |= 8u;
  if ( !v13 )
  {
    v13 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v13);
    *(_QWORD *)(v6 + 40) = v13;
  }
  v14 = *(_DWORD *)(v13 + 24);
  *(_QWORD *)(v13 + 12) = *((_QWORD *)this + 31);
  *(_DWORD *)(v13 + 20) = *((_DWORD *)this + 64);
  *(_DWORD *)(v13 + 24) = v14 | 7;
  v15 = *(_QWORD *)(v6 + 48);
  *(_DWORD *)(v6 + 56) |= 0x10u;
  if ( !v15 )
  {
    v15 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v15);
    *(_QWORD *)(v6 + 48) = v15;
  }
  v16 = *(_DWORD *)(v15 + 24);
  *(_QWORD *)(v15 + 12) = *(_QWORD *)((char *)this + 260);
  *(_DWORD *)(v15 + 20) = *((_DWORD *)this + 67);
  *(_DWORD *)(v15 + 24) = v16 | 7;
}

