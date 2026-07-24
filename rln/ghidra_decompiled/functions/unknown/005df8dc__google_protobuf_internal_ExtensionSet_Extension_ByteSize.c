/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005df8dc
 * Function: google::protobuf::internal::ExtensionSet::Extension::ByteSize
 * Signature: undefined __thiscall ByteSize(Extension * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Extension::ByteSize(int) const */

uint __thiscall
google::protobuf::internal::ExtensionSet::Extension::ByteSize(Extension *this,int param_1)

{
  Extension EVar1;
  Extension EVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  LogMessage *pLVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  LogFinisher aLStack_70 [8];
  LogMessage aLStack_68 [32];
  long local_48;
  
                    /* try { // try from 005df8e4 to 006df8e7 has its CatchHandler @ 005df8e8 */
                    /* catch() { ... } // from try @ 005df8e4 with catch @ 005df8e8 */
                    /* try { // try from 005df8ec to 006df8ef has its CatchHandler @ 005df8f8 */
                    /* try { // try from 005df8f0 to 006df8fb has its CatchHandler @ 005df898 */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 005df8ec with catch @ 005df8f8 */
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[9] != (Extension)0x0) {
    EVar1 = this[8];
    if (this[0xb] != (Extension)0x0) {
      switch(EVar1) {
      case (Extension)0x1:
      case (Extension)0x6:
      case (Extension)0x10:
        uVar11 = *(int *)(*(long *)this + 8) << 3;
        break;
      case (Extension)0x2:
      case (Extension)0x7:
      case (Extension)0xf:
        uVar11 = *(int *)(*(long *)this + 8) << 2;
        break;
      case (Extension)0x3:
        plVar9 = *(long **)this;
        if ((int)plVar9[1] < 1) goto switchD_005df938_default;
        lVar12 = 0;
        uVar11 = 0;
        do {
          iVar4 = io::CodedOutputStream::VarintSize64(*(ulong *)(*plVar9 + lVar12 * 8));
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
        break;
      case (Extension)0x4:
        plVar9 = *(long **)this;
        if ((int)plVar9[1] < 1) goto switchD_005df938_default;
        lVar12 = 0;
        uVar11 = 0;
        do {
          iVar4 = io::CodedOutputStream::VarintSize64(*(ulong *)(*plVar9 + lVar12 * 8));
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
        break;
      case (Extension)0x5:
        plVar9 = *(long **)this;
        if ((int)plVar9[1] < 1) goto switchD_005df938_default;
        lVar12 = 0;
        uVar11 = 0;
        do {
          uVar6 = *(uint *)(*plVar9 + lVar12 * 4);
          if ((int)uVar6 < 0) {
            iVar4 = 10;
          }
          else if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
        break;
      case (Extension)0x8:
        uVar11 = *(uint *)(*(long *)this + 8);
        break;
      case (Extension)0x9:
      case (Extension)0xa:
      case (Extension)0xb:
      case (Extension)0xc:
        LogMessage::LogMessage(aLStack_68,3,&DAT_00698a0c,0x4f9);
        pLVar7 = (LogMessage *)
                 LogMessage::operator<<(aLStack_68,"Non-primitive types can\'t be packed.");
        LogFinisher::operator=(aLStack_70,pLVar7);
        LogMessage::~LogMessage(aLStack_68);
      default:
switchD_005df938_default:
        uVar11 = 0;
        *(undefined4 *)(this + 0x18) = 0;
        goto switchD_005dfa38_default;
      case (Extension)0xd:
        plVar9 = *(long **)this;
        if ((int)plVar9[1] < 1) goto switchD_005df938_default;
        lVar12 = 0;
        uVar11 = 0;
        do {
          uVar6 = *(uint *)(*plVar9 + lVar12 * 4);
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
        break;
      case (Extension)0xe:
        plVar9 = *(long **)this;
        if ((int)plVar9[1] < 1) goto switchD_005df938_default;
        lVar12 = 0;
        uVar11 = 0;
        do {
          uVar6 = *(uint *)(*plVar9 + lVar12 * 4);
          if ((int)uVar6 < 0) {
            iVar4 = 10;
          }
          else if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
        break;
      case (Extension)0x11:
        plVar9 = *(long **)this;
        if ((int)plVar9[1] < 1) goto switchD_005df938_default;
        lVar12 = 0;
        uVar11 = 0;
        do {
          iVar4 = *(int *)(*plVar9 + lVar12 * 4);
          uVar6 = iVar4 << 1 ^ iVar4 >> 0x1f;
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
        break;
      case (Extension)0x12:
        plVar9 = *(long **)this;
        if ((int)plVar9[1] < 1) goto switchD_005df938_default;
        lVar12 = 0;
        uVar11 = 0;
        do {
          lVar10 = *(long *)(*plVar9 + lVar12 * 8);
          iVar4 = io::CodedOutputStream::VarintSize64(lVar10 << 1 ^ lVar10 >> 0x3f);
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
      }
      *(uint *)(this + 0x18) = uVar11;
      if (0 < (int)uVar11) {
        if (uVar11 < 0x80) {
          iVar4 = 1;
        }
        else {
          iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar11);
        }
        uVar6 = param_1 << 3 | 2;
        if (uVar6 < 0x80) {
          uVar11 = iVar4 + uVar11 + 1;
        }
        else {
          iVar5 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
          uVar11 = iVar4 + uVar11 + iVar5;
        }
      }
      goto switchD_005dfa38_default;
    }
    if ((uint)(param_1 << 3) < 0x80) {
      iVar4 = 1;
      uVar11 = (uint)(byte)EVar1;
    }
    else {
      iVar4 = io::CodedOutputStream::VarintSize32Fallback(param_1 << 3);
      uVar11 = (uint)(byte)this[8];
    }
    if (0x11 < uVar11 - 1) goto LAB_005df98c;
    iVar4 = iVar4 << ((byte)EVar1 == 10);
    switch(uVar11) {
    default:
      lVar12 = *(long *)this;
      iVar4 = iVar4 + 8;
      goto LAB_005dfe80;
    case 2:
    case 7:
    case 0xf:
      lVar12 = *(long *)this;
      iVar4 = iVar4 + 4;
      goto LAB_005dfe80;
    case 3:
      plVar9 = *(long **)this;
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          iVar4 = io::CodedOutputStream::VarintSize64(*(ulong *)(*plVar9 + lVar12 * 8));
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 4:
      plVar9 = *(long **)this;
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          iVar4 = io::CodedOutputStream::VarintSize64(*(ulong *)(*plVar9 + lVar12 * 8));
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 5:
                    /* try { // try from 005dfee8 to 006dff0f has its CatchHandler @ 005e0024 */
      plVar9 = *(long **)this;
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          uVar6 = *(uint *)(*plVar9 + lVar12 * 4);
          if ((int)uVar6 < 0) {
                    /* try { // try from 005dff1c to 006dff27 has its CatchHandler @ 005e0028 */
            iVar4 = 10;
          }
          else if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 8:
      lVar12 = *(long *)this;
      iVar4 = iVar4 + 1;
LAB_005dfe80:
      uVar11 = *(int *)(lVar12 + 8) * iVar4;
      break;
    case 9:
      plVar9 = *(long **)this;
                    /* catch() { ... } // from try @ 005dfe08 with catch @ 005e007c */
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
                    /* catch() { ... } // from try @ 005dfdd8 with catch @ 005e0094 */
          plVar13 = *(long **)(*plVar9 + lVar12 * 8);
          uVar6 = (uint)*(undefined8 *)(*plVar13 + -0x18);
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
            uVar6 = (uint)*(undefined8 *)(*plVar13 + -0x18);
          }
          lVar12 = lVar12 + 1;
          uVar11 = uVar11 + iVar4 + uVar6;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 10:
      plVar9 = *(long **)this;
      uVar11 = (int)plVar9[1] * iVar4;
                    /* try { // try from 005dfdd8 to 006dfdeb has its CatchHandler @ 005e0094 */
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          iVar4 = (**(code **)(**(long **)(*plVar9 + lVar12 * 8) + 0x48))();
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
                    /* try { // try from 005dfdfc to 006dfe07 has its CatchHandler @ 005e019c */
          uVar11 = iVar4 + uVar11;
                    /* try { // try from 005dfe08 to 006dfe0f has its CatchHandler @ 005e007c */
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 0xb:
                    /* try { // try from 005dfe10 to 006dfe93 has its CatchHandler @ 005e019c */
      plVar9 = *(long **)this;
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          uVar6 = (**(code **)(**(long **)(*plVar9 + lVar12 * 8) + 0x48))();
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
          }
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
          uVar11 = uVar6 + uVar11 + iVar4;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 0xc:
      plVar9 = *(long **)this;
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
                    /* catch() { ... } // from try @ 005dfee8 with catch @ 005e0024 */
                    /* catch() { ... } // from try @ 005dff1c with catch @ 005e0028 */
          plVar13 = *(long **)(*plVar9 + lVar12 * 8);
                    /* catch() { ... } // from try @ 005dfebc with catch @ 005e002c */
          uVar6 = (uint)*(undefined8 *)(*plVar13 + -0x18);
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
                    /* try { // try from 005e0050 to 006e0237 has its CatchHandler @ 005e0240 */
            plVar9 = *(long **)this;
            uVar6 = (uint)*(undefined8 *)(*plVar13 + -0x18);
          }
          lVar12 = lVar12 + 1;
          uVar11 = uVar11 + iVar4 + uVar6;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 0xd:
      plVar9 = *(long **)this;
                    /* try { // try from 005dfd7c to 006dfd8f has its CatchHandler @ 005e0178 */
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
                    /* try { // try from 005dfd90 to 006dfda3 has its CatchHandler @ 005e0104 */
          uVar6 = *(uint *)(*plVar9 + lVar12 * 4);
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
                    /* try { // try from 005dfdbc to 006dfdc3 has its CatchHandler @ 005e017c */
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 0xe:
      plVar9 = *(long **)this;
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          uVar6 = *(uint *)(*plVar9 + lVar12 * 4);
          if ((int)uVar6 < 0) {
            iVar4 = 10;
          }
          else if (uVar6 < 0x80) {
            iVar4 = 1;
                    /* try { // try from 005dfebc to 006dfec7 has its CatchHandler @ 005e002c */
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 0x11:
      plVar9 = *(long **)this;
                    /* try { // try from 005dfd28 to 006dfd73 has its CatchHandler @ 005dfd28
                       catch() { ... } // from try @ 005dfd28 with catch @ 005dfd28
                       catch() { ... } // from try @ 005dff70 with catch @ 005dfd28
                       catch() { ... } // from try @ 005e0238 with catch @ 005dfd28 */
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          iVar4 = *(int *)(*plVar9 + lVar12 * 4);
          uVar6 = iVar4 << 1 ^ iVar4 >> 0x1f;
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
            plVar9 = *(long **)this;
          }
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
      }
      break;
    case 0x12:
      plVar9 = *(long **)this;
                    /* try { // try from 005dff48 to 006dff4b has its CatchHandler @ 005e017c */
      uVar11 = (int)plVar9[1] * iVar4;
      if (0 < (int)plVar9[1]) {
        lVar12 = 0;
        do {
          lVar10 = *(long *)(*plVar9 + lVar12 * 8);
                    /* try { // try from 005dff6c to 006dff6f has its CatchHandler @ 005e018c */
          iVar4 = io::CodedOutputStream::VarintSize64(lVar10 << 1 ^ lVar10 >> 0x3f);
                    /* try { // try from 005dff70 to 006e004f has its CatchHandler @ 005dfd28 */
          plVar9 = *(long **)this;
          lVar12 = lVar12 + 1;
          uVar11 = iVar4 + uVar11;
        } while (lVar12 < (int)plVar9[1]);
      }
    }
    goto switchD_005dfa38_default;
  }
  if (this[10] != (Extension)0x0) {
LAB_005df98c:
    uVar11 = 0;
    goto switchD_005dfa38_default;
  }
  EVar1 = this[8];
  if ((uint)(param_1 << 3) < 0x80) {
    iVar4 = 1;
    EVar2 = EVar1;
  }
  else {
    iVar4 = io::CodedOutputStream::VarintSize32Fallback(param_1 << 3);
    EVar2 = this[8];
  }
  uVar11 = iVar4 << (EVar1 == (Extension)0xa);
  switch(EVar2) {
  case (Extension)0x1:
  case (Extension)0x6:
  case (Extension)0x10:
    uVar11 = uVar11 + 8;
    break;
  case (Extension)0x2:
  case (Extension)0x7:
  case (Extension)0xf:
    uVar11 = uVar11 + 4;
    break;
  case (Extension)0x3:
  case (Extension)0x4:
    uVar8 = *(ulong *)this;
    goto LAB_005e0170;
  case (Extension)0x5:
                    /* catch() { ... } // from try @ 005dfdc4 with catch @ 005e0100 */
    uVar6 = *(uint *)this;
                    /* catch() { ... } // from try @ 005dfd90 with catch @ 005e0104 */
    if (-1 < (int)uVar6) goto joined_r0x005e00f4;
LAB_005e01dc:
    iVar4 = 10;
    goto LAB_005e0174;
  case (Extension)0x8:
    uVar11 = uVar11 + 1;
    break;
  case (Extension)0x9:
  case (Extension)0xc:
    plVar9 = *(long **)this;
    uVar6 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
      uVar6 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    }
    uVar11 = uVar11 + iVar4 + uVar6;
    break;
  case (Extension)0xa:
    iVar4 = (**(code **)(**(long **)this + 0x48))();
    goto LAB_005e0174;
  case (Extension)0xb:
    uVar6 = (**(code **)(**(long **)this + 0x48))();
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    uVar11 = uVar6 + uVar11 + iVar4;
    break;
  case (Extension)0xd:
    uVar6 = *(uint *)this;
    goto joined_r0x005e01b0;
  case (Extension)0xe:
    uVar6 = *(uint *)this;
    if ((int)uVar6 < 0) goto LAB_005e01dc;
joined_r0x005e01b0:
    if (uVar6 < 0x80) {
LAB_005e00f8:
      iVar4 = 1;
    }
    else {
LAB_005e0120:
      iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    goto LAB_005e0174;
  case (Extension)0x11:
    uVar6 = *(int *)this << 1 ^ *(int *)this >> 0x1f;
joined_r0x005e00f4:
    if (uVar6 < 0x80) goto LAB_005e00f8;
    goto LAB_005e0120;
  case (Extension)0x12:
    uVar8 = *(long *)this << 1 ^ *(long *)this >> 0x3f;
LAB_005e0170:
    iVar4 = io::CodedOutputStream::VarintSize64(uVar8);
LAB_005e0174:
    uVar11 = iVar4 + uVar11;
  }
switchD_005dfa38_default:
                    /* catch() { ... } // from try @ 005dfd7c with catch @ 005e0178 */
                    /* catch() { ... } // from try @ 005dfdbc with catch @ 005e017c
                       catch() { ... } // from try @ 005dff48 with catch @ 005e017c */
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 005dfd74 with catch @ 005e018c
                       catch() { ... } // from try @ 005dff6c with catch @ 005e018c */
                    /* catch() { ... } // from try @ 005dfdfc with catch @ 005e019c
                       catch() { ... } // from try @ 005dfe10 with catch @ 005e019c */
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


