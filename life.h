#ifndef LIFE_H_INCLUDED
#define LIFE_H_INCLUDED
/*
生命类



*/
class LIFE
{
private:
    //基本属性
    int _HealthPoint;
    int _AttackPower;
    int _SpeedVal;
    int _RecoverVal;
    int _MentalVal;
    //成长值
    int _HPstep;
    int _APstep;
    int _SVstep;
    int _RVstep;
    int _MVstep;
public:
    /**已完成!
    *设置各个属性的成长值
    *参数依次为:生命值成长,攻击力成长,速度值成长,回复速度成长,精力值成长
    */
    void setStep(int HPstep,int APstep, int SVstep, int RVstep, int MVstep);
    /**未完成!
    *生命自主决策,分配进化点数
    */
    void DistributionPoints();
    /**未完成!
    *生命进化 获得一个进化点数
    */
    void lifeEvolution();
};
//---------------------------------实现-----------------------------------
void LIFE::setStep(int HPstep,int APstep, int SVstep, int RVstep, int MVstep))
{
    _HPstep = HPstep;
    _APstep = APstep;
    _SVstep = SVstep;
    _RVstep = RVstep;
    _MVstep = MVstep;
}

#endif // LIFE_H_INCLUDED
