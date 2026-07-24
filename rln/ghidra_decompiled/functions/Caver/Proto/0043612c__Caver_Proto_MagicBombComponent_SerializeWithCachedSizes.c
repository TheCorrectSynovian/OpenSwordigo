/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043612c
 * Function: Caver::Proto::MagicBombComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MagicBombComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MagicBombComponent::SerializeWithCachedSizes
          (MagicBombComponent *this,CodedOutputStream *param_1)

{
  MagicBombComponent *pMVar1;
  
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004361cc with catch @ 00436150
                       catch(type#1 @ 00000000) { ... } // from try @ 00436218 with catch @ 00436150
                        */
  pMVar1 = *(MagicBombComponent **)PTR_default_instance__007e7bd0;
  if (*(long *)(this + 0x10) != 0) {
    pMVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (1,*(MessageLite **)(pMVar1 + 0x10),param_1);
  return;
}


