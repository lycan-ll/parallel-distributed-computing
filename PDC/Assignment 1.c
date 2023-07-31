include<stdio.h>

for(int k=0;k<3;k++)
{
response.clear();
wait.clear();
CPU1.clear();
for(int i=0;i<ProcQueue.size();i++)
{
CPU1.loadProcess(ProcQueue.get(i),1;
}
CPU1.runProcessRR(HQ);
CPU1.runProcessRR(LQ);
CPU1.runProcessHPN(HQ);
CPU1.runProcessFCFS(HQ);
avgs.clear();
stats.clear();
for(int i=0;i<CPU1.ProcessAL.size();i++)
{
stats.add(CPU1.stats.get(i));
}
avgs=statsGen(stats,responseTime,contextSwitches,turnAround,waitTime);
responseTime=avg.get(0);
contextSwitches=avg.get(1);
turnAround=avgs.get(2);
waitTime=avgs.get(3);
graph.start(response,"1 CPU response");
graph.start(context,"1 context switches");
graph.start(turnAround,"1 CPU turnAround");
graph.start(wait,"1 CPU Wait");
}