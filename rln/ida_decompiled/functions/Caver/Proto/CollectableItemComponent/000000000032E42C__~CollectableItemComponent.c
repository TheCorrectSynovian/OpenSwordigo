/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032E42C
 * Mangled: _ZN5Caver5Proto24CollectableItemComponentD0Ev
 * Demangled: Caver::Proto::CollectableItemComponent::~CollectableItemComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6E20  Caver::Proto::CollectableItemComponent::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000032E438 string=0x000000000032E43C ""
 *   insn=0x000000000032E440 string=0x000000000032E444 "A"
 *   insn=0x000000000032E444 string=0x000000000032E448 "h"
 *   insn=0x000000000032E448 string=0x000000000032E44C "u""
 *   insn=0x000000000032E44C string=0x00000000001F6E20 "0'"
 *   insn=0x000000000032E450 string=0x000000000032E454 "k$"
 *   insn=0x000000000032E454 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032E464 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032E474 string=0x000000000032E478 "b$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CollectableItemComponent::~CollectableItemComponent(
        Caver::Proto::CollectableItemComponent *this)
{
  *(_QWORD *)this = off_6C9450;
  Caver::Proto::CollectableItemComponent::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

