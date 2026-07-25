/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C42CC
 * Mangled: _ZNK5Caver24SwingableWeaponComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SwingableWeaponComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4E20  Caver::Proto::SwingableWeaponComponent::default_instance(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002C440C  Caver::ComponentOutlet<Caver::WeaponGlowComponent>::identifier(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x00000000002C42E4 string=0x00000000002C42E8 "!"
 *   insn=0x00000000002C42E8 string=0x00000000002C42EC ""
 *   insn=0x00000000002C42F8 string=0x00000000001F4E20 "P'"
 *   insn=0x00000000002C42FC string=0x00000000002C4300 "b"
 *   insn=0x00000000002C4310 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002C4318 string=0x00000000002C431C "i"
 *   insn=0x00000000002C4320 string=0x00000000002C4324 "\n"
 *   insn=0x00000000002C432C string=0x00000000002C4330 "i"
 *   insn=0x00000000002C4330 string=0x00000000002C4334 "jr"
 *   insn=0x00000000002C4334 string=0x00000000002C4338 ""
 *   insn=0x00000000002C433C string=0x00000000002C4340 "I"
 *   insn=0x00000000002C4344 string=0x00000000002C4348 "i"
 *   insn=0x00000000002C4354 string=0x00000000002C436C "`"
 *   insn=0x00000000002C435C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C4364 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002C4370 string=0x00000000002C4374 "K"
 *   insn=0x00000000002C4378 string=0x00000000002C437C "i"
 *   insn=0x00000000002C437C string=0x00000000002C4380 "\n"
 *   insn=0x00000000002C4388 string=0x00000000002C438C "i"
 *   insn=0x00000000002C438C string=0x00000000002C4390 "\n"
 *   insn=0x00000000002C4394 string=0x00000000002C4398 "\n\t"
 *   insn=0x00000000002C439C string=0x00000000002C43A0 "i"
 *   insn=0x00000000002C43A4 string=0x00000000002C43A8 "\n"
 *   insn=0x00000000002C43AC string=0x00000000002C43B0 "i"
 *   insn=0x00000000002C43B4 string=0x00000000002C43B8 "\n"
 *   insn=0x00000000002C43BC string=0x00000000002C43C0 "i"
 *   insn=0x00000000002C43C4 string=0x00000000002C43C8 "\n"
 *   insn=0x00000000002C43C8 string=0x00000000002C43CC ""
 *   insn=0x00000000002C43D0 string=0x00000000002C43D4 "i2A"
 *   insn=0x00000000002C43DC string=0x00000000002C43E0 "iJA"
 *   insn=0x00000000002C4400 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C4404 string=0x00000000002C4408 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::SaveToProtobufMessage(
        Caver::SwingableWeaponComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SwingableWeaponComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w8
  Caver::Proto::FloatColor *v7; // x21
  int v8; // w9
  __int64 result; // x0
  int v10; // w8
  int v11; // w9
  int v12; // w9
  int v13; // w9
  int v14; // w9
  int v15; // w9

  v3 = (Caver::Proto::SwingableWeaponComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SwingableWeaponComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 68);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 32);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 32);
  *(_DWORD *)(v5 + 68) = v6 | 1;
  *(_DWORD *)(v5 + 16) = *((_DWORD *)this + 38);
  *(_QWORD *)(v5 + 20) = *(_QWORD *)((char *)this + 412);
  v8 = *((_DWORD *)this + 105);
  *(_DWORD *)(v5 + 68) = v6 | 0x3F;
  *(_DWORD *)(v5 + 28) = v8;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 32) = v7;
  }
  result = Caver::FloatColorToProtobufMessage((Caver::SwingableWeaponComponent *)((char *)this + 424), v7, v4);
  v10 = *(_DWORD *)(v5 + 68);
  *(_DWORD *)(v5 + 40) = *((_DWORD *)this + 111);
  *(_DWORD *)(v5 + 68) = v10 | 0x40;
  v11 = *((_DWORD *)this + 52);
  *(_DWORD *)(v5 + 68) = v10 | 0xC0;
  *(_DWORD *)(v5 + 44) = v11;
  v12 = *((_DWORD *)this + 58);
  *(_DWORD *)(v5 + 68) = v10 | 0x1C0;
  *(_DWORD *)(v5 + 48) = v12;
  v13 = *((_DWORD *)this + 64);
  *(_DWORD *)(v5 + 68) = v10 | 0x3C0;
  *(_DWORD *)(v5 + 52) = v13;
  v14 = *((_DWORD *)this + 70);
  *(_DWORD *)(v5 + 68) = v10 | 0x7C0;
  *(_DWORD *)(v5 + 56) = v14;
  v15 = *((_DWORD *)this + 76);
  *(_DWORD *)(v5 + 68) = v10 | 0xFC0;
  *(_DWORD *)(v5 + 60) = v15;
  *(_DWORD *)(v5 + 64) = *((_DWORD *)this + 82);
  *(_DWORD *)(v5 + 68) = v10 | 0x1FC0;
  return result;
}

