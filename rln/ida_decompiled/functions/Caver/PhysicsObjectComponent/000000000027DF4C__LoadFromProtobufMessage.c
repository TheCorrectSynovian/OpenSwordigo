/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DF4C
 * Mangled: _ZN5Caver22PhysicsObjectComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::PhysicsObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 37
 *   insn=0x000000000027DF5C string=0x000000000027DF60 "8"
 *   insn=0x000000000027DF60 string=0x000000000027DF64 "H#"
 *   insn=0x000000000027DF60 string=0x00000000001FA840 "0'"
 *   insn=0x000000000027DF64 string=0x000000000027DF68 ""
 *   insn=0x000000000027DF78 string=0x000000000027DF7C "0@"
 *   insn=0x000000000027DF80 string=0x000000000027DFB4 "\t0@9i"
 *   insn=0x000000000027DF84 string=0x000000000027DF88 ""
 *   insn=0x000000000027DF84 string=0x000000000027DFC0 "J#"
 *   insn=0x000000000027DF88 string=0x000000000027DFE8 "I"
 *   insn=0x000000000027DF8C string=0x000000000027E000 "\t"
 *   insn=0x000000000027DF90 string=0x000000000027DF94 "("
 *   insn=0x000000000027DF90 string=0x000000000027E00C "\t @"
 *   insn=0x000000000027DF94 string=0x000000000027DF98 "h"
 *   insn=0x000000000027DF94 string=0x000000000027E018 "\t$@"
 *   insn=0x000000000027DF98 string=0x000000000027DF9C "h"
 *   insn=0x000000000027DF98 string=0x000000000027E024 "\t"
 *   insn=0x000000000027DF9C string=0x000000000027DFA0 ",@"
 *   insn=0x000000000027DFA0 string=0x000000000027DFA4 "h"
 *   insn=0x000000000027DFB4 string=0x000000000027DFB8 "i"
 *   insn=0x000000000027DFB8 string=0x000000000027DFBC "h"
 *   insn=0x000000000027DFC0 string=0x000000000027DFC4 "\t@"
 *   insn=0x000000000027DFC4 string=0x000000000027DFC8 "J"
 *   insn=0x000000000027DFC8 string=0x000000000027DFCC "?"
 *   insn=0x000000000027DFCC string=0x000000000027DFD0 "J"
 *   insn=0x000000000027DFD0 string=0x000000000027DFD4 "I"
 *   insn=0x000000000027DFD4 string=0x000000000027DFD8 ")\t@"
 *   insn=0x000000000027DFD8 string=0x000000000027DFDC ")"
 *   insn=0x000000000027DFDC string=0x000000000027DFE0 "ir"
 *   insn=0x000000000027DFE0 string=0x000000000027DFE4 "H"
 *   insn=0x000000000027DFEC string=0x000000000027DFF0 "!mI"
 *   insn=0x000000000027DFF4 string=0x000000000027DFF8 "`"
 *   insn=0x000000000027E000 string=0x000000000027E004 "i"
 *   insn=0x000000000027E004 string=0x000000000027E008 "h"
 *   insn=0x000000000027E00C string=0x000000000027E010 "i"
 *   insn=0x000000000027E010 string=0x000000000027E014 "("
 *   insn=0x000000000027E018 string=0x000000000027E01C "i"
 *   insn=0x000000000027E024 string=0x000000000027E028 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectComponent::LoadFromProtobufMessage(
        Caver::PhysicsObjectComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  int v5; // w8
  __int64 v6; // x9

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::PhysicsObjectComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E9508);
  v5 = *(_DWORD *)(result + 48);
  if ( (v5 & 1) != 0 )
  {
    *((_BYTE *)this + 112) = *(_BYTE *)(result + 12);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_16;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(result + 16) )
    v6 = result;
  else
    v6 = Caver::Proto::PhysicsObjectComponent::default_instance_;
  *((_QWORD *)this + 28) = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 12LL);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_17;
  }
LABEL_16:
  *((float *)this + 58) = *(float *)(result + 24) * 800.0;
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_18;
  }
LABEL_17:
  *((_DWORD *)this + 67) = *(_DWORD *)(result + 28);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_19;
  }
LABEL_18:
  *((_DWORD *)this + 68) = *(_DWORD *)(result + 32);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_20;
  }
LABEL_19:
  *((_DWORD *)this + 43) = *(_DWORD *)(result + 36);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x80) == 0 )
      return result;
    goto LABEL_9;
  }
LABEL_20:
  *((_BYTE *)this + 237) = *(_BYTE *)(result + 40);
  if ( (v5 & 0x80) == 0 )
    return result;
LABEL_9:
  *((_DWORD *)this + 60) = *(_DWORD *)(result + 44);
  return result;
}

