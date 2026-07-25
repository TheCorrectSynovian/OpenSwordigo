/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9848
 * Mangled: _ZN5Caver5Proto5Scene21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::Scene::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *   0x00000000001F9600  Caver::Proto::Rectangle::default_instance(void)
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000002F9850 string=0x00000000002F9854 "t"
 *   insn=0x00000000002F9860 string=0x00000000002F9864 "h"
 *   insn=0x00000000002F9864 string=0x00000000002F9870 "hB"
 *   insn=0x00000000002F9870 string=0x00000000002F9874 "c"
 *   insn=0x00000000002F9874 string=0x00000000002F9878 "`F"
 *   insn=0x00000000002F9874 string=0x00000000001F9600 "0'"
 *   insn=0x00000000002F987C string=0x00000000002F9880 "`J"
 *   insn=0x00000000002F987C string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::InitAsDefaultInstance(Caver::Proto::Scene *this)
{
  Caver::Proto::Scene *v1; // x19
  __int64 v2; // x8
  Caver::Proto::Program *v3; // x0
  __int64 result; // x0

  v1 = this;
  v2 = Caver::Proto::ObjectLibrary::default_instance_;
  if ( !Caver::Proto::ObjectLibrary::default_instance_ )
  {
    this = (Caver::Proto::Scene *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
    v2 = Caver::Proto::ObjectLibrary::default_instance_;
  }
  *((_QWORD *)v1 + 16) = v2;
  v3 = (Caver::Proto::Program *)Caver::Proto::Rectangle::default_instance(this);
  *((_QWORD *)v1 + 17) = v3;
  result = Caver::Proto::Program::default_instance(v3);
  *((_QWORD *)v1 + 18) = result;
  return result;
}

