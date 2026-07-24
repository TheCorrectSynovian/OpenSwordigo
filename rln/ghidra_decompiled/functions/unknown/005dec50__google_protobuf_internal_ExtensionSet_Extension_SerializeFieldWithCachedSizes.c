/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dec50
 * Function: google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes
 * Signature: undefined __thiscall SerializeFieldWithCachedSizes(Extension * this, int param_1, CodedOutputStream * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,
   google::protobuf::io::CodedOutputStream*) const */

void __thiscall
google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes
          (Extension *this,int param_1,CodedOutputStream *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  LogMessage *pLVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  LogFinisher aLStack_70 [8];
  LogMessage aLStack_68 [32];
  long local_48;
  
                    /* try { // try from 005dec64 to 006dec8b has its CatchHandler @ 005dee70 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[9] == (Extension)0x0) {
    if (this[10] == (Extension)0x0) {
      switch(this[8]) {
      case (Extension)0x1:
        WireFormatLite::WriteDouble(param_1,*(double *)this,param_2);
        break;
      case (Extension)0x2:
        WireFormatLite::WriteFloat(param_1,*(float *)this,param_2);
        break;
      case (Extension)0x3:
        WireFormatLite::WriteInt64(param_1,*(long *)this,param_2);
        break;
      case (Extension)0x4:
        WireFormatLite::WriteUInt64(param_1,*(ulong *)this,param_2);
        break;
      case (Extension)0x5:
        WireFormatLite::WriteInt32(param_1,*(int *)this,param_2);
        break;
      case (Extension)0x6:
        WireFormatLite::WriteFixed64(param_1,*(ulong *)this,param_2);
        break;
      case (Extension)0x7:
        WireFormatLite::WriteFixed32(param_1,*(uint *)this,param_2);
        break;
      case (Extension)0x8:
        WireFormatLite::WriteBool(param_1,(bool)*this,param_2);
        break;
      case (Extension)0x9:
        WireFormatLite::WriteString(param_1,*(string **)this,param_2);
        break;
      case (Extension)0xa:
        WireFormatLite::WriteGroup(param_1,*(MessageLite **)this,param_2);
        break;
      case (Extension)0xb:
        WireFormatLite::WriteMessage(param_1,*(MessageLite **)this,param_2);
        break;
      case (Extension)0xc:
        WireFormatLite::WriteBytes(param_1,*(string **)this,param_2);
        break;
      case (Extension)0xd:
        WireFormatLite::WriteUInt32(param_1,*(uint *)this,param_2);
        break;
      case (Extension)0xe:
        WireFormatLite::WriteEnum(param_1,*(int *)this,param_2);
        break;
      case (Extension)0xf:
        WireFormatLite::WriteSFixed32(param_1,*(int *)this,param_2);
        break;
      case (Extension)0x10:
        WireFormatLite::WriteSFixed64(param_1,*(long *)this,param_2);
        break;
      case (Extension)0x11:
        WireFormatLite::WriteSInt32(param_1,*(int *)this,param_2);
        break;
      case (Extension)0x12:
        WireFormatLite::WriteSInt64(param_1,*(long *)this,param_2);
      }
    }
  }
  else if (this[0xb] == (Extension)0x0) {
    switch(this[8]) {
    case (Extension)0x1:
      plVar5 = *(long **)this;
                    /* try { // try from 005ded70 to 006dedbb has its CatchHandler @ 005deedc */
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteDouble(param_1,*(double *)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x2:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteFloat(param_1,*(float *)(*plVar5 + lVar7 * 4),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x3:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteInt64(param_1,*(long *)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x4:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteUInt64(param_1,*(ulong *)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x5:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteInt32(param_1,*(int *)(*plVar5 + lVar7 * 4),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x6:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteFixed64(param_1,*(ulong *)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x7:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
                    /* try { // try from 005df4ec to 006df513 has its CatchHandler @ 005df51c */
        lVar7 = 0;
        do {
          WireFormatLite::WriteFixed32(param_1,*(uint *)(*plVar5 + lVar7 * 4),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
                    /* try { // try from 005df514 to 006df51f has its CatchHandler @ 005df118 */
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x8:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteBool(param_1,*(bool *)(*plVar5 + lVar7),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x9:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteString(param_1,*(string **)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xa:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteGroup(param_1,*(MessageLite **)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xb:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005df4ec with catch @ 005df51c
                        */
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteMessage(param_1,*(MessageLite **)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xc:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
                    /* try { // try from 005df1f0 to 006df217 has its CatchHandler @ 005df4cc */
          WireFormatLite::WriteBytes(param_1,*(string **)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xd:
      plVar5 = *(long **)this;
                    /* try { // try from 005df264 to 006df28b has its CatchHandler @ 005df4c0 */
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteUInt32(param_1,*(uint *)(*plVar5 + lVar7 * 4),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
                    /* try { // try from 005df28c to 006df4eb has its CatchHandler @ 005df118 */
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xe:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005df264 with catch @ 005df4c0
                        */
          WireFormatLite::WriteEnum(param_1,*(int *)(*plVar5 + lVar7 * 4),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005df1f0 with catch @ 005df4cc
                        */
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xf:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteSFixed32(param_1,*(int *)(*plVar5 + lVar7 * 4),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x10:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteSFixed64(param_1,*(long *)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x11:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteSInt32(param_1,*(int *)(*plVar5 + lVar7 * 4),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x12:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          WireFormatLite::WriteSInt64(param_1,*(long *)(*plVar5 + lVar7 * 8),param_2);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
    }
  }
  else if (*(int *)(this + 0x18) != 0) {
    io::CodedOutputStream::WriteVarint32(param_2,param_1 << 3 | 2);
    io::CodedOutputStream::WriteVarint32(param_2,*(uint *)(this + 0x18));
                    /* try { // try from 005decc8 to 006decef has its CatchHandler @ 005ded20 */
    switch(this[8]) {
    case (Extension)0x1:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteLittleEndian64(param_2,*(ulong *)(*plVar5 + lVar7 * 8));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x2:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteLittleEndian32(param_2,*(uint *)(*plVar5 + lVar7 * 4));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x3:
      plVar5 = *(long **)this;
                    /* try { // try from 005deef8 to 006deefb has its CatchHandler @ 005def0c */
      if (0 < (int)plVar5[1]) {
                    /* try { // try from 005deefc to 006def1f has its CatchHandler @ 005deee8 */
        lVar7 = 0;
        do {
                    /* catch() { ... } // from try @ 005deef8 with catch @ 005def0c */
          io::CodedOutputStream::WriteVarint64(param_2,*(ulong *)(*plVar5 + lVar7 * 8));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x4:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteVarint64(param_2,*(ulong *)(*plVar5 + lVar7 * 8));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x5:
      plVar5 = *(long **)this;
                    /* catch() { ... } // from try @ 005dec64 with catch @ 005dee70 */
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          uVar2 = *(uint *)(*plVar5 + lVar7 * 4);
          if ((int)uVar2 < 0) {
            io::CodedOutputStream::WriteVarint64(param_2,(long)(int)uVar2);
          }
          else {
            io::CodedOutputStream::WriteVarint32(param_2,uVar2);
          }
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
                    /* try { // try from 005deea4 to 006deed3 has its CatchHandler @ 005deedc */
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x6:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteLittleEndian64(param_2,*(ulong *)(*plVar5 + lVar7 * 8));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005df28c with catch @ 005df118
                       catch(type#1 @ 00000000) { ... } // from try @ 005df514 with catch @ 005df118
                        */
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x7:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteLittleEndian32(param_2,*(uint *)(*plVar5 + lVar7 * 4));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x8:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteVarint32(param_2,(uint)*(byte *)(*plVar5 + lVar7));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x9:
    case (Extension)0xa:
    case (Extension)0xb:
    case (Extension)0xc:
      LogMessage::LogMessage(aLStack_68,3,&DAT_00698a0c,0x473);
                    /* try { // try from 005decf0 to 006ded6f has its CatchHandler @ 005deb84 */
      pLVar4 = (LogMessage *)
               LogMessage::operator<<(aLStack_68,"Non-primitive types can\'t be packed.");
                    /* catch() { ... } // from try @ 005dec28 with catch @ 005ded08 */
      LogFinisher::operator=(aLStack_70,pLVar4);
                    /* catch() { ... } // from try @ 005debec with catch @ 005ded10 */
      LogMessage::~LogMessage(aLStack_68);
      break;
    case (Extension)0xd:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteVarint32(param_2,*(uint *)(*plVar5 + lVar7 * 4));
                    /* try { // try from 005deed4 to 006deee7 has its CatchHandler @ 005deb84 */
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
                    /* catch() { ... } // from try @ 005ded70 with catch @ 005deedc
                       catch() { ... } // from try @ 005deea4 with catch @ 005deedc */
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xe:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          uVar2 = *(uint *)(*plVar5 + lVar7 * 4);
          if ((int)uVar2 < 0) {
            io::CodedOutputStream::WriteVarint64(param_2,(long)(int)uVar2);
          }
          else {
            io::CodedOutputStream::WriteVarint32(param_2,uVar2);
          }
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0xf:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteLittleEndian32(param_2,*(uint *)(*plVar5 + lVar7 * 4));
                    /* catch() { ... } // from try @ 005dedf8 with catch @ 005dee4c */
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x10:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          io::CodedOutputStream::WriteLittleEndian64(param_2,*(ulong *)(*plVar5 + lVar7 * 8));
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x11:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
                    /* try { // try from 005dedf8 to 006dee33 has its CatchHandler @ 005dee4c */
          iVar1 = *(int *)(*plVar5 + lVar7 * 4);
          io::CodedOutputStream::WriteVarint32(param_2,iVar1 << 1 ^ iVar1 >> 0x1f);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
      break;
    case (Extension)0x12:
      plVar5 = *(long **)this;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          lVar6 = *(long *)(*plVar5 + lVar7 * 8);
          io::CodedOutputStream::WriteVarint64(param_2,lVar6 << 1 ^ lVar6 >> 0x3f);
          plVar5 = *(long **)this;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar5[1]);
      }
    }
  }
                    /* catch() { ... } // from try @ 005decc8 with catch @ 005ded20 */
                    /* catch() { ... } // from try @ 005dec34 with catch @ 005ded28 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005debb0 with catch @ 005ded30 */
  return;
}


