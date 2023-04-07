#ifndef DAPROJECT_GRAPH_H
#define DAPROJECT_GRAPH_H

#include "StationTrack.h"
#include <iostream>
#include <vector>
#include <tuple>
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
    double edmondsKarp(int source, int target);
    vector<tuple<Station, Station, double>> PairsMaxFlow();
    vector<Track*> getTrackSet() const;
    void addToTrackSet(Track* track);
    int targetMaxFlow(int target);
    vector<Station *> getEndStationsOfLine();
    void findMaxFlowDistrict(int k);
    bool findMinCostPath(int source, int target);
    double minCostEdmondsKarp(int source, int target);
    pair<vector<Station *>, double> dijkstra(Station *source, Station *target);

private:
    vector<Station *> stationSet;
    vector<Track*> trackSet;

};
#endif //DAPROJECT_GRAPH_H
