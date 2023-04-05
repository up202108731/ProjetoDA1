#ifndef DAPROJECT_GRAPH_H
#define DAPROJECT_GRAPH_H

#include "StationTrack.h"
#include <iostream>
using namespace std;

class graph{
public:
    graph();
    Station* findStation(const string &name) const;
    bool addStation(const string &name, const string &district, const string &municipality, const string &township, const string &lineName);
    void setStation(int v, const string &station, const string &district, const string &municipality, const string &township, const string &lineName);
    int getNumStations() const;
    std::vector<Station *> getStationSet() const;
    void addTrack(int origin, int dest, double c, string s);
    bool findPath(int source, int target);
    void edmondsKarp(int source, int target);

private:
    vector<Station *> stationSet;
};
#endif //DAPROJECT_GRAPH_H
