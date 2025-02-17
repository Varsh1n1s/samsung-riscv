# Task - 3:


---

### Instructions Table

| **Instruction**                  | **HEX Code** | **Instruction Type** | **Breakdown**                                                                                          |
|----------------------------------|--------------|-----------------------|--------------------------------------------------------------------------------------------------------|
| `lui a0, 0x21`                   | `00021537`   | U-Type               | `imm=0x21`, `rd=a0(10)`, `opcode=0x37`                                                                |
| `addi sp, sp, -16`               | `FF010113`   | I-Type               | `imm=0xFFF0`, `rs1=sp(2)`, `funct3=0x0`, `rd=sp(2)`, `opcode=0x13`                                    |
| `li a2, 120`                     | `07800613`   | I-Type               | `imm=0x78`, `rs1=0`, `funct3=0x0`, `rd=a2(12)`, `opcode=0x13`                                         |
| `sd ra, 8(sp)`                   | `00113423`   | S-Type               | `imm=0x8`, `rs1=sp(2)`, `rs2=ra(1)`, `funct3=0x3`, `opcode=0x23`                                      |
| `jal ra, 10480`                  | `3B8000EF`   | J-Type               | `imm=0x28F0`, `rd=ra(1)`, `opcode=0x6F`                                                               |
| `ld ra, 8(sp)`                   | `00813083`   | I-Type               | `imm=0x8`, `rs1=sp(2)`, `funct3=0x3`, `rd=ra(1)`, `opcode=0x03`                                       |
| `ret`                            | `00008067`   | I-Type               | `imm=0x0`, `rs1=ra(1)`, `funct3=0x0`, `rd=0`, `opcode=0x67`                                           |
| `auipc a5, 0xffff0`              | `FFFF0797`   | U-Type               | `imm=0xFFFF0`, `rd=a5(15)`, `opcode=0x17`                                                             |
| `beqz a5, 100f4 <register_fini+0x18>` | `00078863`   | B-Type               | `imm=0x18`, `rs1=a5(15)`, `rs2=0`, `funct3=0x0`, `opcode=0x63`                                        |
| `j 10228`                        | `1380006F`   | J-Type               | `imm=0x2800`, `rd=0`, `opcode=0x6F`                                                                   |
| `sub a2, a2, a0`                 | `40A60633`   | R-Type               | `funct7=0x20`, `rs2=a0(10)`, `rs1=a2(12)`, `funct3=0x0`, `rd=a2(12)`, `opcode=0x33`                   |
| `lw a0, 0(sp)`                   | `00012503`   | I-Type               | `imm=0x0`, `rs1=sp(2)`, `funct3=0x2`, `rd=a0(10)`, `opcode=0x03`                                      |
| `lbu a5, 1944(gp) # 231a0 <completed.5468>` | `7981C783`   | I-Type               | `imm=0x798`, `rs1=gp(3)`, `funct3=0x4`, `rd=a5(15)`, `opcode=0x03`                                    |
| `sb a5, 1944(gp) # 231a0 <completed.5468>` | `78F18C23`   | S-Type               | `imm=0x798`, `rs1=gp(3)`, `rs2=a5(15)`, `funct3=0x0`, `opcode=0x23`                                   |
| `mv a1, s0`                      | `00040593`   | I-Type               | `imm=0x0`, `rs1=s0(8)`, `funct3=0x0`, `rd=a1(11)`, `opcode=0x13`                                      |

---


## 1. Instruction: _lui a0, 0x21_

![image](https://github.com/user-attachments/assets/e6dafdfe-5232-4a75-b687-c233a26940b1)


![image](https://github.com/user-attachments/assets/a0cc031e-ce7b-4c4b-8311-dff108dce75f)


## 2. Instruction: _addi sp,sp,-16_

![image](https://github.com/user-attachments/assets/60c1c873-23ec-44b5-9449-83418400f026)


![image](https://github.com/user-attachments/assets/cfcc730b-dfe1-4b8a-9f5f-1d85020d087d)


## 3. Instruction: _li a2,120_

![image](https://github.com/user-attachments/assets/2b0b82e2-8322-45b5-bb4f-150fee83672a)

## 4. Instruction: _sd ra, 8(sp)_

![image](https://github.com/user-attachments/assets/490d288d-1732-4f1e-84fa-9ab3ecf38218)

![image](https://github.com/user-attachments/assets/6f166044-11d5-4739-9a1b-04ec68a2ed9f)


## 5. Instruction: _jal ra, 10480 <printf>_

![image](https://github.com/user-attachments/assets/9277279c-add4-445c-b154-f139ad3a6a62)


![image](https://github.com/user-attachments/assets/501a1395-1b73-40bf-85da-6ae02f99e352)


## 6. Instruction: _ld ra, 8(sp)_

![image](https://github.com/user-attachments/assets/ade71c97-58a7-47cf-99fe-8e9a28031849)

![image](https://github.com/user-attachments/assets/05cc3270-bedf-49c0-98af-bcde450c3978)


## 7. Instruction: _ret_

![image](https://github.com/user-attachments/assets/d1a2b035-8433-40fb-8ffe-f0d3fab39553)

## 8. Instruction: _auipc a5,0xffff0_

![image](https://github.com/user-attachments/assets/7fdf536c-307e-4331-9076-ca0e244823aa)

## 9. Instruction: _beqz a5, 100f4 <register_fini+0x18>_

![image](https://github.com/user-attachments/assets/aa2cbe49-e2c8-43cc-b8d7-b9dd96faaab3)

![image](https://github.com/user-attachments/assets/a02d46b3-b99a-4956-ba0a-2c885cf8b71c)


## 10. Instruction: _j 10228 <atexit>_

![image](https://github.com/user-attachments/assets/3882c355-dca1-4b67-ac08-37142c0b995a)


![image](https://github.com/user-attachments/assets/138f5305-aac6-48df-be9d-3a17a1b37803)


## 11. Instruction: _sub a2,a2,a0_

![image](https://github.com/user-attachments/assets/70952cce-9ea8-4b0b-a597-6c3f091b7570)


![image](https://github.com/user-attachments/assets/d1df18d3-3caf-4efc-beca-e25a7cdaae3e)


## 12. Instruction: _lw a0,0(sp)_

![image](https://github.com/user-attachments/assets/ddb50bdf-0c3a-4956-bdd0-7852340e2989)


![image](https://github.com/user-attachments/assets/83edc644-4ea2-4e4d-ba52-6d0259a55801)


## 13. Instruction: _lbu a5,1944(gp) # 231a0 <completed.5468>_

![image](https://github.com/user-attachments/assets/41ca9ed0-5deb-4317-a5bd-30efd6469fc5)

![image](https://github.com/user-attachments/assets/43c61e2d-05b6-4d24-a4de-94131fcba26c)


## 14. Instruction: _sb a5,1944(gp) # 231a0 <completed.5468>_

![image](https://github.com/user-attachments/assets/76b55ceb-a661-45a3-97c9-60d519dbea04)

![image](https://github.com/user-attachments/assets/da426319-8b77-4e21-9837-6881aebf45e0)


## 15. Instruction: _mv a1,s0_

![image](https://github.com/user-attachments/assets/a77fe570-9892-4bba-9e21-a5373c1319a6)





